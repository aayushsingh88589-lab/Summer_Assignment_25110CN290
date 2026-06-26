#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));              // seed random number
    int number = rand() % 100 + 1; // random number between 1 and 100
    int guess;

    cout << "Guess the number (1 to 100): ";

    while(true) {
        cin >> guess;
        if(guess < number)
            cout << "Too low! Try again: ";
        else if(guess > number)
            cout << "Too high! Try again: ";
        else {
            cout << "Congratulations! You guessed it right." << endl;
            break;
        }
    }
    return 0;
}
