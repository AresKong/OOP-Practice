#include "student.h"
#include <iostream>
using namespace std;

student::student(){
	sum = 0;
	n = 0;
}

void student::stuname(std::string s){
	name = s;
}

void student::print(){
	cout << name << '\t';
}

void student::printcourse(student s){
	int n = s.showtotal();
	int sum = s.showsum();
	map<string, int>::iterator it; 
    for (it = course.begin(); it != course.end(); it++)
        cout << it -> first << '\t' << it -> second << '\t';
    cout << "average =" << sum * 1.0 / n << '\t' << endl;
}

void student::courseinfo(std::string name, int score){
	course[name] = score;
	sum += score;
	n++;
}

int student::showsum(){
	return sum;
}

int student::showtotal(){
	return n;
}
