//Jenna Lambert
//Lab 6.2
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char key[10] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D' };
	char userInput[10];
	int counter = 0;
	int questionNumber = 1;
	int correctAnswers = 0;
	int wrongAnswers = 0;
	do {
		cout << "Enter your answer to question " << questionNumber << " with a capital letter:\n";
		cin >> userInput[counter];
		if (userInput[counter] == key[counter]) {
			correctAnswers++;
		}
		else if (userInput[counter] != 'A' || userInput[counter] != 'B' || userInput[counter] != 'C' || userInput[counter] != 'D') {
			do {
				cout << "Invalid response. Please try again to answer question " << questionNumber << " with a capital letter:\n";
				cin >> userInput[counter];
			} while (userInput[counter] != 'A' || userInput[counter] != 'B' || userInput[counter] != 'C' || userInput[counter] != 'D');
		}
		questionNumber++;
		counter++;
	} while (counter < 10);
	wrongAnswers = 10 - correctAnswers;
	if (correctAnswers <= 7) {
		cout << "You have failed the exam. Beter luck next time.\n";
		cout << "You got " << correctAnswers << " right and " << wrongAnswers << " wrong.";
	}
	else {
		cout << "You have passed the exam. Congrats.\n";
		cout << "You got " << correctAnswers << " right and " << wrongAnswers << " wrong.";
	}
}