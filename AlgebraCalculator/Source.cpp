#include <iostream>
#include <iomanip>
#include <string>
#include "Calculator.h";
using namespace std;

int main() {
	char key = ' ';
	string command = " ";
	int numint;
	double numdeci;
	bool integer = false;
	bool decimal = false;
	Calculator<int> calculateint;
	Calculator<double> calculatedeci;
	cout << "Welcome to Calculator! Type 'c' to start: ";
	cin >> key;
	while (key != 'c') {
		cout << "Oops! That isn't 'c'! Type 'c' to start: ";
		cin >> key;
	}
	while (key != 'q') {
		cout << "Int or Decimal? ('i' or 'd'): ";
		cin >> key;
		while (key != 'i' && key != 'd') {
			cout << "Invalid choice. Int or Decimal? ('i' or 'd'): ";
			cin >> key;
		}
		if (key == 'i') {
			integer = true;
		}
		if (key == 'd') {
			decimal = true;
		}
		cout << "Enter a number: ";
		if (integer) {
			cin >> numint;
			calculateint.setNum1(numint);
		}
		if (decimal) {
			cin >> numdeci;
			calculatedeci.setNum1(numdeci);
		}
		cout << "What operation would you like to perform? (type \"list\" for operations) ";
		cin >> command;
		while (command != "+" && command != "-" && command != "*" && command != "/" && command != "^" &&command != "list") {
			cout << "Invalid command. What operation would you like to perform? (type \"help\" for operations) ";
			cin >> command;
			if (command == "list") {
				calculateint.Commands();
				cout << "What operation would you like to perform? (type \"list\" for operations) ";
				cin >> command;
			}
		}
		cout << "Enter another number: ";
		if (integer) {
			cin >> numint;
			calculateint.setNum2(numint);
		}
		if (decimal) {
			cin >> numdeci;
			calculatedeci.setNum2(numdeci);
		}
		if (command == "+") {
			if (integer) {
				calculateint.Addition();
			}
			if (decimal) {
				calculatedeci.Addition();
			}
		}
		else if (command == "-") {
			if (integer) {
				calculateint.Subtraction();
			}
			if (decimal) {
				calculatedeci.Subtraction();
			}
		}
		else if (command == "*") {
			if (integer) {
				calculateint.Multiplication();
			}
			if (decimal) {
				calculatedeci.Multiplication();
			}
		}
		else if (command == "/") {
			if (integer) {
				if (calculateint.getNum2() == 0) {
					cout << "Cannot divide by 0!" << endl;
				}
				else {
					calculateint.Division();
				}
			}
			if (decimal) {
				if (calculatedeci.getNum2() == 0) {
					cout << "Cannot divide by 0!" << endl;
				}
				else {
					calculatedeci.Division();
				}
			}
		}
		else if (command == "^") {
			if (integer) {
				calculateint.Power();
			}
			if (decimal) {
				calculatedeci.Power();
			}
		}
		integer = false;
		decimal = false;
		cout << "Continue? ('q' to quit, anything else to continue) ";
		cin >> key;
	}
	cout << "Bye-bye :)";
	return 0;
}