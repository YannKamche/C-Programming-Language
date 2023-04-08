/*
This program computes the area of a rectangle*/
#include <stdio.h>

int main() 
{
    double length, width;
    printf("Enter the length: ");
    scanf("%lf", &length);

    printf("Enter the width: ");
    scanf("%lf", &width);

    double area = length * width;
    printf("The area of your rectangle is: %lf", area);
    return 0;
}