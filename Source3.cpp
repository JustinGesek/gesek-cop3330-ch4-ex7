#include <iostream>
#include "operation.h"
using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Justin Gesek
 */



int main()
{
	cout << "Please enter two numbers and an operation." << endl;
	string operation;
	string lstr;
	string rstr;

	cout << "First number: ";
	cin >> lstr;
	cout << "Second number: ";
	cin >> rstr;
	cout << "Operator: ";
	cin >> operation;
	double l = str2double(lstr);
	double r = str2double(rstr);
	if (operation == "+")
	{
		cout << "The sum of " << l << " and " << r << " is " << l + r << endl;
	}
	else if (operation == "-")
	{
		cout << "The difference between " << l << " and " << r << " is " << l - r << endl;
	}
	else if (operation == "*")
	{
		cout << "The product of " << l << " and " << r << " is " << l * r << endl;
	}
	else if (operation == "/")
	{
		cout << "The result of dividing " << l << " and " << r << " is " << l / r << endl;
	}
	else
	{
		cout << "Sorry I dont recognize the operation '" << operation << "'." << endl;
	}
	return 0;
}