// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "ClockType.h"
using namespace std;


int main()
{
	clockType myClock;
	clockType yourClock;
	myClock.setTime(11, 25, 35);
	yourClock.setTime(11, 25, 35);
    cout << "Hello World!\n"; 
	cout << myClock.equalTime(yourClock);
}


