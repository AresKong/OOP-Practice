#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <string>
#include <map>
class student
{
public:
	void stuname(std::string name);
	void courseinfo(std::string name, int score);
	void print();
	void printcourse(student s);
	int showsum();
	int showtotal();
	student();
private:
	std::string name;
	map<string, int> course;
	int sum, n;
};
#endif 