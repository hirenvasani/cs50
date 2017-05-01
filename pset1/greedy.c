#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float cent;
    int amt, count, quarter_count, dime_count, nickel_count, penny_count, balance;
    printf("O hai! ");
    do
    {
        printf("How much change is owed? \n");
        cent = get_float();
    } while (cent<=0);
    
    amt =(int) round (cent * 100);
    
    quarter_count = amt / 25;
    balance = amt % 25;
    
    dime_count = balance / 10;
    balance = balance % 10;
    
    nickel_count = balance / 5;
    balance = balance % 5;
    
    penny_count = balance / 1;

    count = quarter_count + dime_count + nickel_count + penny_count;
    

    printf("%i\n", count);
}

