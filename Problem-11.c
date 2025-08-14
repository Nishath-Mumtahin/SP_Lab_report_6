#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
    if(num<=1) return 0;
    for (int i = 2; pow(i, 2) <= num; i++)
    {
        if (num % i == 0)
        {
             return 0;
        }
    }
    return 1;
}


int main()
{
    int number;
    printf("Input a positive number: ");
    scanf("%d", &number);
    if (isPrime(number))
    {
        printf("The number %d is a prime number.\n", number);
    }
    else
    {
        printf("The number %d is not a prime number.\n", number);
    }
}