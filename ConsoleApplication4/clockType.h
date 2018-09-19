#pragma once

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

