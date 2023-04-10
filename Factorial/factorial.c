#include <stdio.h>

//Factorial of a number
int fact(int num) {
    if (num == 0 || num == 1) 
        return 1;
    else 
        return num * fact(num - 1);
}

int main() {
    int num;
    char name[30];

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Hi %s!!!\nThe factorial of %d is %d", name, num, fact(num));
    return 0;
}