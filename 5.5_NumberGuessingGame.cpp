// This program generates a number from a range and the user inputs to guess it.
// The program will tell the user whether the number is too high, too low, or equal.

#include <iostream>
#include <random>
using namespace std;

int main()
{
	int userGuess;
	int guessCount = 0;
	random_device engine;
	uniform_int_distribution<int> target(1, 10);
	int randomNum = target(engine);

	do
	{
		cout << "Welcome to the number guessing game!" << endl << endl << "Enter a number from 1-10:" << endl;
		cin >> userGuess;
		guessCount++;
	} while(userGuess != randomNum);

	if (userGuess > randomNum)
	{
		cout << "Too high!" << endl << endl;
	}
	else if (userGuess < randomNum)
	{
		cout << "Too low!" << endl << endl;
	}
	else
	{
		cout << "Correct! Good job!" << endl;
		cout << "Guesses made: " << guessCount << endl;
	}

return 0;
}