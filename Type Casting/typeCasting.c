#include <stdio.h>

int main() {

    int numberOfPizza = 17;
    int people = 2;

    int halfThePizza = (double) (numberOfPizza / people);
    printf("%f", halfThePizza);
    return 0;
}