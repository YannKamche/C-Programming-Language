// A guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function declaration
void getUserName();
void guessingGame();
int getUserGuess(int);
void checkGuess(int, int);
int rangeGuess();

int main() 
{   
    srand(time(NULL));
    guessingGame();
    return 0;
}

//function definition
void getUserName() {
    printf("Welcome to the World of fun!!!\nEnter your name: ");
    char userName[20];
    scanf("%s", userName);
}
int getUserGuess(int range) {
    printf("Guess a Number from 0 to %d: ", range);
    int guess;
    scanf("%d", &guess);
    return guess;
}
void checkGuess(int random, int guess) {
    if(random == guess)
        printf("Good guess!!!");
    else
        printf("Try Again later!!");
}
int rangeGuess() {
    printf("Choose your range of numbers to guess: ");
    int maxValue;
    scanf("%d", &maxValue);
    return maxValue;
}
void guessingGame() {
    getUserName();
    int random, maxValue;
    maxValue = rangeGuess();
    random = rand() % maxValue + 1;
    printf("%d\n", random);
    checkGuess(random, getUserGuess(maxValue));
}