#include "pdadd.h"
#include <iostream>
using namespace std;

void pdadd::add(int date, std::map<int, string>& pdDateToContent){
	int flag = -1;
	string s;
	map<int,string>::iterator it;
	cout << "Enter the content of the diary:" << endl;
	cin >> s;
	for(it = pdDateToContent.begin(); it != pdDateToContent.end(); it++){
		if(it -> first == date){
			flag = 0;
			it -> second = s + '\n';
			cout << "You've modified this diary." << endl;
			break;
		}
	}
	if(flag == -1){
		cout << "You've added a new diary." << endl;
		pdDateToContent[date] = s + '\n';
	}
}
