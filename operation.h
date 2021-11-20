#ifndef COEFFICIENT_H
#define COEFFICIENT_H

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Justin Gesek
 */
 
 double str2double(std::string s)
{
	if (s == "zero")
	{
		return 0.0;
	}
	if (s == "one")
	{
		return 1.0;
	}
	if (s == "two")
	{
		return 2.0;
	}
	if (s == "three")
	{
		return 3.0;
	}
	if (s == "four")
	{
		return 4.0;
	}
	if (s == "five")
	{
		return 5.0;
	}
	if (s == "six")
	{
		return 6.0;
	}
	if (s == "seven")
	{
		return 7.0;
	}
	if (s == "eight")
	{
		return 8.0;
	}
	if (s == "nine")
	{
		return 9.0;
	}
	return stod(s);
}

#endif