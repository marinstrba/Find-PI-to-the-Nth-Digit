#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 18

int main (void)
{   
    int num_of_digits = 0;
    const long double pi = acosl(-1.0L);

    printf("Enter a number and have the program generate PI up to that many decimal places(Limit 18):\n");
    printf("Enter the number:");

    if (scanf("%d",&num_of_digits) != 1 || num_of_digits < 0 || num_of_digits > MAX)
    {
        printf("The number you have entered is either too big or it is a negative number.\nPlease try again.\n");
        return 1;
    }

    printf("Here is your pi number:\n");
    printf("%.*Lf\n",num_of_digits,pi);


    return 0;
}