#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Guess the number (between 1 and 100): ";

    // Loop until the user guesses correctly
    while (true) {
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again: ";
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed the number." << endl;
            break;
        }
    }

    return 0;
}
