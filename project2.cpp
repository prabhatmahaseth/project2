#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    std::cout << "Welcome to Guess the Number!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Can you guess it?" << std::endl;

    int userGuess;
    int attempts = 0;

    while (true) {
        // Get user input
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;

        // Check if the guess is correct
        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber
                      << " in " << attempts << " attempts." << std::endl;
            break;
        } else {
            // Provide hints to the user
            if (userGuess < secretNumber) {
                std::cout << "Too low! Try again." << std::endl;
            } else {
                std::cout << "Too high! Try again." << std::endl;
            }
        }
    }

    return 0;
}
