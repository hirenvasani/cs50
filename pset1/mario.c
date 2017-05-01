#include <stdio.h>
#include <cs50.h>

int main (void){
    int height, space, row, hash;
    
    do
    {
        printf("Height: ");
        height = get_int();
    }
    while(height < 0 || height >23);

    for (row =1; row <= height; row++)
    {
        for (space = 1; space <=height - row; space++)
        {
            printf(" ");
        }
        for (hash=0; hash <=row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}



