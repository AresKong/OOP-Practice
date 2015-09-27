#include "pdshow.h"
#include <iostream>
using namespace std;

void pdshow::show(int date, std::map<int, string> pdDateToContent){
	int flag = 0;
	map<int,string>::iterator it;
	for(it = pdDateToContent.begin(); it != pdDateToContent.end(); it++){
		if(date == it -> first){
			flag = 1;
			cout << it -> second << endl;
		}
	}
	if(flag == 0)
		cout << "No such diary." << endl;
}
