#include "maze.h"
int main(void)
{
    Init_Field();
    for(int i=0; i<HEIGHT; i++){
        for(int j=0; j<WIDTH; j++){
            printf("%c", field[i][j]);
        }
        printf("\n");
    }
    return 0;
}