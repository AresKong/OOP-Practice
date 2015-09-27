#include "pdlist.h"
#include <iostream>
using namespace std;

void pdlist::list(int startDate, int endDate, std::map<int, string> pdDateToContent){
	int flag = -1;
	map<int,string>::iterator it;
	for(it = pdDateToContent.begin(); it != pdDateToContent.end(); it++){
		if(it -> first >= startDate && it -> first <= endDate){
			flag = 0;
			cout << it -> first << endl;
		}
	}
	if(flag == -1)
		cout << "No such diary." << endl;
}

void pdlist::list(std::map<int, string> pdDateToContent){
	map<int,string>::iterator it;
	for(it = pdDateToContent.begin(); it != pdDateToContent.end(); it++) {
        cout << it -> first << endl;
    }
}
