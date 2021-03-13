#include <iostream>
#include "date.h"

bool Date::operator==(const Date& other)
{
	return (d == other.d && m == other.m && y == other.y);
}

bool Date::operator!=(const Date& other)
{
	return !(*this == other);
}

bool Date::operator<=(const Date& other)
{
	if (y > other.y)
		return false;
	else if (m > other.m)
		return false;
	else if (d > other.m)
		return false;
	else
		return true;
}

bool Date::operator>(const Date& other)
{
	if (y <= other.y)
		return false;
	else if (m <= other.m)
		return false;
	else if (d <= other.m)
		return false;
	else
		return true;
}

bool Date::operator>=(const Date& other)
{
	if (y < other.y)
		return false;
	else if (m < other.m)
		return false;
	else if (d < other.m)
		return false;
	else
		return true;
}

bool Date::operator<(const Date& other)
{
	if (y >= other.y)
		return false;
	else if (m >= other.m)
		return false;
	else if (d >= other.m)
		return false;
	else
		return true;
}

std::ostream& operator<<(std::ostream& os, const Date& dt)
{
	os << dt.d << '.' << dt.m << '.' << dt.y;
	return os;
}
