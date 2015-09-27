#include "Fraction.h"
#include <iostream>
using namespace std;
int main(){
	cout << "Enter a fraction F." << endl;
	Fraction F;
 	cin >> F;
 	cout << F << endl;
 	Fraction onethird(1,3);
 	cout << "F + 1/3: "; 
 	cout << (F + onethird); 
 	cout << endl;
 	cout << "F - 1/3: ";
 	cout << (F - onethird);
 	cout << endl;
 	cout << "F * 1/3: ";
 	cout << (F * onethird);
 	cout << endl;
 	cout << "F / 1/3: ";
 	cout << (F / onethird);
 	cout << endl;
 	cout << "F == 1/3: ";
 	cout << (F == onethird);
 	cout << endl;
 	cout << "F != 1/3: ";
 	cout << (F != onethird);
 	cout << endl;
 	cout << "F < 1/3: ";
 	cout << (F < onethird);
 	cout << endl;
 	cout << "F > 1/3: ";
 	cout << (F > onethird);
 	cout << endl;
 	cout << "F >= 1/3: ";
 	cout << (F >= onethird);
 	cout << endl;
 	cout << "F <= 1/3: ";
 	cout << (F <= onethird);
 	cout << endl;
 	cout << "F.toString: ";
 	cout << F.toString();
 	cout << endl;
 	return 0;
}
