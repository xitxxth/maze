#include "maze.h"
int main(void)
{
    Init_Field();










    //final print
    for(int i=0; i<HEIGHT; i++){
        printf("\n");
        for(int j=0; j<WIDTH; j++)
            printf("%c", field[i][j]);
    }
    return 0;
}