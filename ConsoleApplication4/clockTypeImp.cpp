#include <iostream>
#include "pch.h"
#include "clockType.h"




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
