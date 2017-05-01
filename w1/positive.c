#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Please give me an positive Int: ");
        n=GetInt();
    }
    while (n < 1);
    printf("Thanks for the positive Int! \n");
}