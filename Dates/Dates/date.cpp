#include "stdafx.h"
#include <iostream>
#include <algorithm>

#include "date.h"
using std::cout;
using std::cin;
int global;

Date::Date() : month("January"), day(1), year(2001) { cout << "INSIDE CONST" << endl; }

Date::Date(string m, int d, int y) 
{
	if (!validateDate(m, d, y))
	{
		cout << "IF FALSE" << endl;
		Date();
	}
	else
	{
		month = m;
		day = d;
		year = y;
		cout << "MONTH IS :" << month << " DAY IS: " << day << " YEAR IS: " << year << endl;
	}
}

bool Date::validateDate(string m, int d, int y)
{
	cout << "size is " << sizeof(monthStrAbbrev) / sizeof(monthStrAbbrev[0]) << endl;;
	int index = NULL;

	for (int x = 0; x < 11; x++)
	{
		string mAbr = monthStr[x].substr (0, 3);
		transform(mAbr.begin(), mAbr.end(), mAbr.begin(), (int(*) (int)) tolower);
		cout << "Abbr: " << mAbr << endl;
		if (m == mAbr)
		{
			index = x;
			global = x;
			cout << "x " << x << " global " << global << " Index " << index << endl;
			if (d < 1 && d > monthDays[index])
			{
				cout << "FALSE 1" << endl;
				return false;
			}
			if (y < MIN_YEAR || y > MAX_YEAR)
			{
				cout << "FALSE 2" << endl;
				return false;
			}

			break;
		}
	}
	if (index == NULL)
	{
		cout << "IF NULL" << endl;
		return false;
	}
	else
	{
		cout << " IF NOT NULL" << endl;
		return true;
	}
}

void Date::print(DateFormat type)
{
	if (type == mdy1)
	{
		cout << global + 1 << "/" << day << "/" << year << endl;
	}
	else if (type == mdy2)
	{
		cout << monthStr[global] << day + ", " << year << endl;
	}
	else if (type == ymd1)
	{
		cout << year + "-" << (global + 1) + "-" << day << endl;
	}
	else if (type = ymd2)
	{
		cout << year + "-" << month + "-" << day << endl;
	}
}