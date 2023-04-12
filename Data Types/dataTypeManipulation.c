#include <stdio.h>

int main() {
    int myNum = 5;
    double myDoubleNum = 5.0;
    char myChar = 'A';
    char myString[30];

    printf("The sum of myNum and myDoubleNum is %f", myNum + myDoubleNum);
    printf("Enter your name: ");
    scanf("%s", myString);
    printf("Your name is : %s", myString);

    int answer = (int) myDoubleNum + myNum;
    printf("\n%i", answer);
    printf("\n%i", myChar);
    printf("\n%c", myChar);
    return 0;
}