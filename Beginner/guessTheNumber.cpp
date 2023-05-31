#include <cstdlib>
#include <iostream>
#include <time.h>

// generate random number between 1 - 100
int getRand() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

int main() {

    // initialise variables
    int secretNum = getRand();
    bool correct = false;
    int attempts = 0;

    // loop until user guesses correctly
    while (!correct) {
        attempts++;

        int newGuess;

        std::cout << "Enter your guess: ";
        std::cin >> newGuess;

        if (newGuess == secretNum) {
            correct = true;
        } else if (newGuess > secretNum) {
            std::cout << "Too high! \n";
        } else {
            std::cout << "Too low! \n";
        }
    }

    std::cout << "Congratulations! The number was " << secretNum << std::endl;
    std::cout << "You took " << attempts << " attempts";

    return 0;
}