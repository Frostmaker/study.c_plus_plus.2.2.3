#pragma once
#include <iostream>

class Date {
private:
	int d, m, y;

public:
	Date() : d(20), m(02), y(2002) {}
	Date(int d, int m, int y) : d(d), m(m), y(y) {}

	bool operator== (const Date& other);
	bool operator!= (const Date& other);
	bool operator< (const Date& other);
	bool operator<= (const Date& other);
	bool operator> (const Date& other);
	bool operator>= (const Date& other);

	Date operator++ ();
	Date operator++ (int);
	Date operator-- ();
	Date operator-- (int);

	friend std::ostream& operator<<(std::ostream& os, const Date& dt);
	friend std::istream& operator>>(std::istream& os, Date& dt);
};