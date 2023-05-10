#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int);

int main()

{
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);

    for(int i = num; i > 1; i--) 
    {
        if(isPrime(i))
            printf("%i is prime\n", i);
    }
    
    return 0;
}

bool isPrime(int input) {
    for(int i = sqrt(input); i > 1; i--)
    {
        if(input % i == 0) return false;
    }
    return true;
}