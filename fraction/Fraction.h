#ifndef _FRACTION_H_
#define _FRACTION_H_
#include <string>
#include <istream>
#include <ostream>
using namespace std;
class Fraction
{
friend istream& operator >>(istream&, Fraction& obj);
friend ostream& operator <<(ostream& os, const Fraction& obj);
public:
	Fraction();
	Fraction(int n, int d);
	Fraction(const Fraction& F);
	const Fraction operator +(const Fraction& that);
	const Fraction operator -(const Fraction& that);
	const Fraction operator *(const Fraction& that);
	const Fraction operator /(const Fraction& that);
	bool operator ==(const Fraction& rhs ) const;
	bool operator !=(const Fraction& rhs ) const;
	bool operator <(const Fraction& rhs ) const;
	bool operator >(const Fraction& rhs ) const;
	bool operator <=(const Fraction& rhs ) const;
	bool operator >=(const Fraction& rhs ) const;
	operator double() const;
	string toString() const;
private:
	int numerator;
	int denominator;
};
#endif

