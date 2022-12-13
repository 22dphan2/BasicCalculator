#pragma once
#include <iostream>
#include <cmath>
#ifndef Calculator_h
#define Calculator_h
using namespace std;
template<typename number>
class Calculator {
public:
	void setNum1(number x) {
		num1 = x;
	}
	void setNum2(number y) { 
		num2 = y;
	}
	number getNum1() { 
		return num1; 
	}
	number getNum2() { 
		return num2; 
	}
	void Commands() {
		cout << "Addition ('+')\nSubtraction ('-')\nMultiplication ('*')\nDivision ('/')\nPower ('^')\n";
	}
	void Addition() {
		cout << "\n" << num1 << " + " << num2 << " = " << num1 + num2 << "\n" << endl;
	}
	void Subtraction() {
		cout << "\n" << num1 << " - " << num2 << " = " << num1 - num2 << "\n" << endl;
	};
	void Multiplication() {
		cout << "\n" << num1 << " * " << num2 << " = " << num1 * num2 << "\n" << endl;
	}
	void Division() {
		cout << "\n" << num1 << " / " << num2 << " = " << num1 / num2 << "\n" << endl;
	}
	void Power() {
		cout << "\n" << num1 << " to the power of " << num2 << " = " << pow(num1,num2) << "\n" << endl;
	}
private:
	number num1;
	number num2;
};

#endif