#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CROSS '+'
#define HORIZONTAL '-'
#define VERTICAL '|'
#define EMTPY ' '
#define HEIGHT 5
#define WIDTH 7
#define LEFT 0
#define RIGHT 1
char field[HEIGHT][WIDTH];
void Init_Field(void);
void Init_Field(void){
    int i, j;
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
    return;
}