#include "room.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

vvoid showinfo(room *p){
	p -> showinfo();
}

int main(){
	room C, D, E, F;
	room_A A;
	room_B B;
	room_lobby lobby;
	room* p;
	std::string cmd;
	int found = 0, win = 0, lose = 0;
	A.set_leftexit(&D);
	A.set_downexit(&lobby);
	B.set_leftexit(&E);
	B.set_downexit(&lobby);
	B.set_rightexit(&F);
	C.set_downexit(&lobby);
	D.set_downexit(&A);
	E.set_downexit(&B);
	F.set_downexit(&B);
	lobby.set_leftexit(&A);
	lobby.set_rightexit(&B);
	lobby.set_upexit(&C);
	srand((unsigned)time(NULL));
	int prin_no = rand() % 6;
	int mon_no = rand() % 6;
	switch(prin_no){
		case 0:
			A.set_princess();
			break;
		case 1:
			B.set_princess();
			break;
		case 2:
			C.set_princess();
			break;
		case 3:
			D.set_princess();
			break;
		case 4:
			E.set_princess();
			break;
		case 5:
			F.set_princess();
			break;
		}
	switch(mon_no){
		case 0:
			A.set_monster();
			break;
		case 1:
			B.set_monster();
			break;
		case 2:
			C.set_monster();
			break;
		case 3:
			D.set_monster();
			break;
		case 4:
			E.set_monster();
			break;
		case 5:
			F.set_monster();
			break;
		}
	p = &lobby;
	showinfo(p);
	while((!win)&&(!lose)){
	cin >>  cmd;
	if(cmd == "left"){
		p = p -> go_left();
		found = p -> isfound(p, found);
		if(found)
			cout << "You've found the princess. Now leave the castle with her. " << endl;
		win = p -> iswin(p, &lobby, found, win);
		lose = p -> islose(p, lose);
		if((!win)&&(!lose))
			showinfo(p);
	}
	else if(cmd == "right"){
		p = p -> go_right();
		found = p -> isfound(p, found);
		if(found)
			cout << "You've found the princess. Now leave the castle with her. " << endl;
		win = p -> iswin(p, &lobby, found, win);
		lose = p -> islose(p, lose);
		if((!win)&&(!lose))
			showinfo(p);
	}
	else if(cmd == "up"){
		p = p -> go_up();
		found = p -> isfound(p, found);
		if(found)
			cout << "You've found the princess. Now leave the castle with her. " << endl;
		win = p -> iswin(p, &lobby, found, win);
		lose = p -> islose(p, lose);
		if((!win)&&(!lose))
			showinfo(p);
	}
	else if(cmd == "down"){
		p = p -> go_down();
		found = p -> isfound(p, found);
		if(found)
			cout << "You've found the princess. Now leave the castle with her. " << endl;
		win = p -> iswin(p, &lobby, found, win);
		lose = p -> islose(p, lose);
		if((!win)&&(!lose))
			showinfo(p);
	}
}

	if(win)
		cout << "You've succeeded in resucing the princess!" << endl;
	if(lose)
		cout << "There's a monster in the room and you're killed by the monster. Game over~ " << endl;
	return 0;	
}

