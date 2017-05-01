#include <stdio.h>
#include <cs50.h>
    
int main (void){
    
    long long cardnumber, number;
    int double_digit, double_number, double_total, double_digit_temp, single_number, single_total, total, checksum;
    double_digit = double_number = double_total = double_digit_temp = single_number = single_total = total = checksum = 0;
    do{
        printf ("Number: ");
        cardnumber =get_long_long();
    }
    while (cardnumber<0);

    
    if(cardnumber > 999999999999 && cardnumber < 9999999999999999){
        //printf ("Valid %lld \n", cardnumber);   
        
        //Luhn’s algorithm
        for (number = cardnumber; number > 0; number /=10)
        {
            single_number = number % 10;
            single_total = single_total + single_number;
            //printf("single total %d \n", single_total);
            number = number / 10;
            //printf("number %lld \n", number);
            double_digit = number % 10;
            if (double_digit > 4){
                double_digit_temp = double_digit * 2;
                double_number = (double_digit_temp % 10) + (double_digit_temp / 10);
            }
            else{
                double_number = double_digit * 2;
            }
            double_total = double_total + double_number;
        }
        
        total = double_total+single_total;
        //printf("total %d %d %d \n", double_total, single_total, double_total+single_total );
        //Checksum validation
        checksum = total % 10;
        if (checksum == 0){
            //valid
            if((cardnumber >= 4000000000000 && cardnumber< 5000000000000) || (cardnumber >= 4000000000000000 && cardnumber< 5000000000000000)){
                printf("VISA\n");
            }
            else if((cardnumber >= 340000000000000 && cardnumber< 350000000000000) || (cardnumber >= 370000000000000 && cardnumber< 380000000000000)){
                printf("AMEX\n");
            }
            else if(cardnumber >= 5100000000000000 && cardnumber< 5600000000000000){
                printf("MASTERCARD\n");
            }
            else{
                printf("INVALID\n");
            }
        }
        else{
            printf ("INVALID\n"); 
        }
    }
    else{
        printf ("INVALID\n");   
    }
}