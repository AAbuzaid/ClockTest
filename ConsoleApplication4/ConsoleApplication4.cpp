﻿// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class clockType
{
public:
	clockType();
	clockType(int, int, int);
	void setTime(int, int, int);
	void getTime(int&, int&, int&) const;
	void printTime() const;
	void incrementSeconds();
	void incrementMinutes();
	void incrementHours();
	bool equalTime(clockType) const;
private:
	int hr;
	int min;
	int sec;
};

int main()
{
	clockType myClock;
	clockType yourClock;
	myClock.setTime(11, 25, 35);
	yourClock.setTime(11, 25, 35);
    cout << "Hello World!\n"; 
	cout << myClock.equalTime(yourClock);
}




void clockType::setTime(int hours, int minutes, int seconds)
{
	hr = hours;
	min = minutes;
	sec = seconds;
}

bool clockType::equalTime(clockType otherClock) const
{
	return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

clockType::clockType()
{
	hr = 0;
	min = 0;
	sec = 0;
}

clockType::clockType(int hours, int minutes, int seconds)
{
	hr = hours;
	min = minutes;
	sec = seconds;
}
