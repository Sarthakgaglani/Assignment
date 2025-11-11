#include <iostream>
#include <cstdlib>  
#include <ctime>   
using namespace std;

int main() {
    int number, guess;
    srand(time(0));             
    number = rand() % 100 + 1;  

    cout << "?? Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } 
        else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } 
        else {
            cout << "Congratulations! You guessed the correct number: " << number << endl;
            break; 
        }
    }

    return 0;
}

