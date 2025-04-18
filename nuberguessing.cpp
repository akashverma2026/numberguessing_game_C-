#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    } while (guess != number);

    return 0;
}
