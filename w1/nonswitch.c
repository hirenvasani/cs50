#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf("Please give me an int between 1 and 10: ");
    int  n = GetInt();
    
    if(n>= 1 && n<=3)
    {
        printf("You picked a small Int! \n");
    }
    else if(n>=4 && n<=7)
    {
        printf("You picked a medium Int! \n");
    }
    else if(n>=8 && n <=10)
    {
        printf("You picked a large Int! \n");
    }
    else
    {
        printf("You picked an invalid Int! \n");
    }
}