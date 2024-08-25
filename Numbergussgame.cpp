#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(nullptr));                // Use current time as seed for random generator
    int randomNumber = rand() % 100 + 1; // Generates a random number between 1 and 100
    int userGuess = 0;

    cout << "Guess the number between 1 and 100: ";

    while (userGuess != randomNumber)
    {
        cin >> userGuess;

        if (userGuess > randomNumber)
        {
            cout << "Too high! Try again: ";
        }
        else if (userGuess < randomNumber)
        {
            cout << "Too low! Try again: ";
        }
        else
        {
            cout << "Congratulations! You've guessed the correct number." <<endl;
        }
    }

    return 0;
}