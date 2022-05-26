#include "maze.h"
int main(void)
{
    int N, M, i, j, hole;
    scanf("%d", &N);
    scanf("%d", &M);
    int WIDTH = 2*N+1;
    int HEIGHT = 2*M+1;
    char field[WIDTH][HEIGHT];
    for(i=0; i<HEIGHT; i+=2)
        for(j=0; j<WIDTH; j+=2)
            field[i][j] = CROSS;
    for(i=0; i<HEIGHT; i+=2)
        for(j=1; j<WIDTH; j+=2)
            field[i][j] = HORIZONTAL;
    for(i=1; i<HEIGHT; i+=2)
        for(j=0; j<WIDTH; j+=2)
            field[i][j] = VERTICAL;
    for(i=1; i<HEIGHT; i+=2)
        for(j=1; j<WIDTH; j+=2)
            field[i][j] = EMTPY;
    FILE* fp = fopen("20201604.maz","wt");
    if(!fp){
        printf("FILE OPEN FAILED\n");
        exit(0);
    }
    srand(time(NULL));
    for(int i=1; i<HEIGHT; i+=2){
        for(int j=1; j<WIDTH; j+=2){
            hole = rand()%2;
            if(j==WIDTH-2)  hole = DOWN;
            if(i==HEIGHT-2)  hole = RIGHT;
            if(hole==RIGHT) field[i][j+1] = EMTPY;
            else if(hole==DOWN) field[i+1][j] = EMTPY;
        }
    }//맨 오른쪽, 아래쪽이 반드시 직진통로
    field[HEIGHT-2][WIDTH-1] = VERTICAL;

    //final print
    for(int i=0; i<HEIGHT; i++){
        for(int j=0; j<WIDTH; j++){
            fprintf(fp, "%c", field[i][j]);
        }
        fprintf(fp, "\n");
    }
    if(fclose(fp)){
        printf("FILE CLOSE ERROR\n");
        exit(0);
    }
    return 0;
}