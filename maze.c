#include "maze.h"
int main(void)
{
    Init_Field(); //initiate field condition
    for(int i=1; i<HEIGHT; i+=2){
        for(int j=1; j<WIDTH; j+=2){
            hole = rand()%2;
            if(i==HEIGHT-2)  hole = RIGHT;
            if(j==WIDTH-2)  hole = DOWN;
            if(hole==RIGHT) field[i][j+1] = EMTPY;
            else if(hole==DOWN) field[i+1][j] = EMTPY;
        }
    }//맨 오른쪽, 아래쪽이 반드시 직진통로
    field[HEIGHT-2][WIDTH-2] = EMTPY;

    //final print
    for(int i=0; i<HEIGHT; i++){
        printf("\n");
        for(int j=0; j<WIDTH; j++)
            printf("%c", field[i][j]);
    }
    return 0;
}