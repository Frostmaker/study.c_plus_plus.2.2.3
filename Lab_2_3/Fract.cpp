#include <iostream>
#include "fract.h"

Fract Fract::operator+(const Fract& other)
{
	Fract temp;
	temp.denom = this->denom * other.denom;
	temp.numen = this->denom * other.numen + other.denom * this->numen;
	return temp;
}


Fract Fract::operator-(const Fract& other)
{
	Fract temp;
	temp.denom = this->denom * other.denom;
	temp.numen = this->numen * other.denom - other.numen * this->denom;
	return temp;
}


Fract Fract::operator*(const Fract& other)
{
	Fract temp;
	temp.numen = numen * other.numen;
	temp.denom = denom * other.denom;

	return temp;
}


Fract Fract::operator/(const Fract& other)
{
	Fract temp;
	temp.numen = this->numen * other.denom;
	temp.denom = this->denom * other.numen;

	return temp;
}


bool Fract::operator==(const Fract& other)
{
	if (numen == other.numen && denom == other.denom)
		return true;
	else
		return false;
}


bool Fract::operator!=(const Fract& other)
{

	return !(*this == other);
}


std::ostream& operator<<(std::ostream& os, const Fract& fr)
{
	os << fr.numen << " / " << fr.denom;
	return os;
}


std::istream& operator>>(std::istream& os, const Fract& fr)
{
	os >> fr.numen;
	os >> fr.denom;
	return os;
}
