#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(0)));

    
    int targetNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > targetNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < targetNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number." << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
    } while (guess != targetNumber);

    return 0;
}
