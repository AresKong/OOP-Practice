#include "pdremove.h"
using namespace std;

int pdremove::remove(int date, std::map<int, string>& pdDateToContent){
	int flag = -1;
	map<int,string>::iterator it;
	for(it = pdDateToContent.begin(); it != pdDateToContent.end();){
		if(date == it -> first){
			flag = 0;
			pdDateToContent.erase(it++);
		}
		else
			it++;
	}
	return flag;
}
