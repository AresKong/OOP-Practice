#include "pdadd.h"
#include "pdlist.h"
#include "pdshow.h"
#include "pdremove.h"
#include "pdbasic.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::string;

int main(){
	int date, startDate, endDate;
	string cmd, choice;
	pdbasic pd;
	pdadd diaryAdd;
	pdlist diaryList;
	pdshow diaryShow;
	pdremove diaryRemove;
	map<int,string>::iterator it;
	int remove;
	ifstream in("diary.txt");
	if (!in.is_open()) 
		cout << "Open error!" << endl;
	pd.fileOpen(in);
	
	cout << "Enter your commmand:" << endl;
	cin >> cmd;
	while(cmd != "exit"){
		if(cmd == "pdadd"){
			cout << "Enter date:" << endl;
			cin >> date;
			diaryAdd.add(date, pd.dateToContent);
		}
		else if(cmd == "pdlist"){
			cout << "Provide start and end date ? (Y/N)" << endl;
			cin >> choice;
			if(choice == "N")
				diaryList.list(pd.dateToContent);
			else{
				cout << "Enter start date:" << endl;
				cin >> startDate;
				cout << "Enter end date:" << endl;
				cin >> endDate;
				diaryList.list(startDate, endDate, pd.dateToContent);
			}
		}
		else if(cmd == "pdshow"){
			cout << "Enter date:" << endl;
			cin >> date;
			diaryShow.show(date, pd.dateToContent);
		}
		else if(cmd == "pdremove"){
			cout << "Enter date:" << endl;
			cin >> date;
			remove = diaryRemove.remove(date, pd.dateToContent);
			if(remove == 0)
				cout << "success!" << endl;
			else
				cout << "failure!" << endl;
		}
	
		cout << "Enter your commmand:" << endl;
			cin >> cmd;
	}
	ofstream out("diary.txt");
	pd.fileSave(pd.dateToContent, out);
	return 0;
}
