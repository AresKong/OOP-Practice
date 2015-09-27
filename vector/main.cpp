#include "vector.h"
#include <iostream>
using namespace std;

int main(){
	try {
		int i;
		Vector<int> v(10);
		Vector<int> empty;
		for(i = 0; i < 10; i++)
			v[i] = i;
		empty = Vector<int>(v);
		for(i = 0; i < 10; i++)
			cout << "empty[" << i << "]: " << empty[i] << endl;
		cout << endl;
		cout << "The size of v before inflation: " << v.size() << endl;
		cout << "The size of v after an inflation of 10: " << v.inflate(10) << endl;
		cout << endl;
		for(i = 0; i < 20; i++)
			cout << "v[" << i << "]: " << v[i] << endl;
		cout << endl;
	} catch (IndexOutofBounds& e){
		e.info();
	}
}
