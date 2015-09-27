#include "pdbasic.h"
#include <sstream>
using namespace std;
	
void pdbasic::fileOpen(std::ifstream& in){
	
	int number;
	string s, temp;
	while(!in.eof()){
		getline(in, s);
		std::stringstream ss;
		ss << s;
		ss >> number;
		while(getline(in, s)){
			if(s[0] == '#')
				break;
			temp += s + "\n";
		}
		dateToContent[number] = temp;
		temp = "";
	}
}

void pdbasic::fileSave(std::map<int, string> pdDateToContent, std::ofstream& out){
	string str;
	map<int,string>::iterator it; 
    for(it = pdDateToContent.begin(); it != pdDateToContent.end(); it++) {
    	std::stringstream ss;
		ss << it -> first;
    	str = ss.str();
    	out << str + '\n';
    	out << it -> second;
    	out << '#';
		out <<'\n';
    }
}
	
