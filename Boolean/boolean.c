#include<stdio.h>
#include <stdbool.h>
int main()
{
    _Bool myBoolean = 1;
    printf("Is my Boolean true or false : %d \n 0 is false\n 1 is true", myBoolean);

    //Using the boolean library

    bool myBool = true;
    printf("The value of my bool is: %d\n", myBool);
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 20) 
        myBool = true;
    else
        myBool = false;
    printf("%d", myBool);

    // Variable naming
    // A good variable must start with a lowercase letter or an underscore or should be separated with
    // underscores
    // 21carsold isn't a correct variable
    // int the_number_of_car_sold
    int car_sold;
    double carSold;
    return 0;

}