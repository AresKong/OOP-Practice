#include "student.h"
#include <iostream>
#include <vector>
using namespace std;
int main(){
	float average;
	vector<student> stu;
	std::string sname, cname;
	int cscore;
	cin >> sname;
	while(sname != "stop"){
		student a;
		{
		a.stuname(sname);
		cin >> cname;
		while(cname != "end"){
			cin >> cscore;
			a.courseinfo(cname, cscore);
			cin >> cname;
		} 
		stu.push_back(a);
		}
		cin >> sname;
	}
	vector<student>::iterator p;
	int i = 0;
	for (p = stu.begin(); p < stu.end(); p++)
	{
		cout << i++ << '\t';
		p -> print();
		p -> printcourse(*p);
	}
	return 0;
}