#include "room.h"
#include <iostream>
using namespace std;

void room::set_princess(){
	princess = 1;
}

void room::set_monster(){
	monster = 1;
}

void room::set_downexit(room* p){
	downexit = p;
}

void room_A::set_leftexit(room* p){
	leftexit = p;
}

void room_B::set_rightexit(room* p){
	rightexit = p;
}

void room_lobby::set_upexit(room* p){
	upexit = p;
}

int room::iswin(room* p, room *lobby, int found, int win){
	if((p == lobby)&&(found == 1))
		win = 1;
	return win;
}

int room::islose(room*p, int lose){
	if(p -> monster == 1)
		lose = 1;
	return lose; 
}

int room::isfound(room* p, int found){
	if(p -> princess == 1)
		found = 1;
	return found;
}

room* room::go_down(){
	return downexit;
}

room* room_A::go_left(){
	return leftexit;
}

room* room_B::go_right(){
	return rightexit;
}

room* room_lobby::go_up(){
	return upexit;
}

void room::showinfo(){
	cout << "You've entered a dead end. There's only one exit: down" << endl << "Enter your command: " << endl;
}

void room_A::showinfo(){
	cout << "Welcome to room A. There are two exits as: left and down" << endl << "Enter your command: " << endl;
}

void room_B::showinfo(){
	cout << "Welcome to room B. There are three exits as: left, right and down" << endl << "Enter your command: " << endl;
}

void room_lobby::showinfo(){
	cout << "Welcome to lobby. There are three exits as: left, up and right" << endl << "Enter your command: " << endl;
}
