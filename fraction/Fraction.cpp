#include "Fraction.h"
#include <sstream>
#include <iostream>
using namespace std;
Fraction::Fraction(){
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int n = 0, int d = 1):numerator(n), denominator(d){}

Fraction::Fraction(const Fraction& F){
	numerator = F.numerator;
	denominator = F.denominator;
}

const Fraction Fraction::operator +(const Fraction& that){
	if(denominator == that.denominator)
		return Fraction(numerator + that.numerator, denominator);
	else
		return Fraction(numerator * that.denominator + that.numerator * denominator,
					    denominator * that.denominator);
}

const Fraction Fraction::operator -(const Fraction& that){
	if(denominator == that.denominator)
		return Fraction(numerator - that.numerator, denominator);
	else
		return Fraction(numerator * that.denominator - that.numerator * denominator,
					    denominator * that.denominator);
}

const Fraction Fraction::operator *(const Fraction& that){
	return Fraction(numerator * that.numerator, denominator * that.denominator);
}

const Fraction Fraction::operator /(const Fraction& that){
	return Fraction(numerator * that.denominator, denominator * that.numerator);
}

bool Fraction::operator ==(const Fraction& rhs ) const{
	return ((numerator * rhs.denominator - rhs.numerator * denominator) == 0);
}

bool Fraction::operator !=(const Fraction& rhs ) const{
	return !(*this == rhs);
}

bool Fraction::operator <(const Fraction& rhs ) const{
	return (numerator * rhs.denominator < rhs.numerator * denominator);
}

bool Fraction::operator >(const Fraction& rhs ) const{
	return rhs < *this;
}

bool Fraction::operator <=(const Fraction& rhs ) const{
	return !(rhs < *this);
}

bool Fraction::operator >=(const Fraction& rhs ) const{
	return !(*this < rhs);
}

string Fraction::toString() const{
	stringstream ss;
	ss << numerator;
	string first = ss.str();
	string s = first + "/";
	stringstream sr;
	sr << denominator;
	string second = sr.str(); 
	s += second;
	return s;
}

Fraction::operator double() const{
	return numerator / (double)denominator;
}

istream& operator >>(istream& is, Fraction& obj){
	cout << "input numerator: " << endl;
    is >> obj.numerator;
	cout << "input denominator: " << endl;
    is >> obj.denominator ;
	return is;
}

ostream& operator <<(ostream& os,const Fraction& obj){
	os << obj.numerator << "/" << obj.denominator;
	return os;
}
