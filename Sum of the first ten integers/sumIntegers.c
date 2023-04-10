#include <stdio.h>

//Calculates the sum of the first 10 positive intergers
int sumOfIntegers() {
    int i, sum;
    sum = 0;
    for (i = 0; i <= 10; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    printf("The sum of the first 10 integers is: %d", sumOfIntegers());
    return 0;
}
