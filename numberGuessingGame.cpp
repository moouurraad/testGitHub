#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // Initialize random number generator
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess; // Variable to store the user's guess

    cout << "Please guess a number (1-100): " << endl;

    do {
        cin >> guess; // Get the user's guess
        if (guess > randomNumber) {
            cout << "Try a smaller number!" << endl;
        } else if (guess < randomNumber) {
            cout << "Try a bigger number!" << endl;
        } else {
            cout << "You got it! Perfect!" << endl;
        }
    } while (guess != randomNumber); // Keep looping until the guess is correct

    return 0;
}