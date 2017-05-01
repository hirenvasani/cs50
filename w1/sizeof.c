#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //bool b;
    char c;
    double d;
    float f;
    int i;
    long long l;
    //string s;
    
    printf("Bool: %lu \n", sizeof(bool)); /other meathod
    printf ("char: %lu \n", sizeof(c));
    printf ("Double: %lu \n", sizeof(d));
    printf ("Float: %lu \n", sizeof(f));
    printf ("Int: %lu \n", sizeof(i));
    printf ("Long Long: %lu \n", sizeof(l));
    printf ("String: %lu \n", sizeof(string));
}