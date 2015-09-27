#include <iostream>
using namespace std;
class IndexOutofBounds {
public:
	IndexOutofBounds(int e) : errorValue(e) { }
	~IndexOutofBounds() { }
	void info() {
		cerr << "Index " << errorValue << " out of range!" << endl;
	}
private:
	int errorValue;
};

template <class T>
class Vector {
public:
	Vector();		// create an empty vector
	Vector(int size);	// create a vector of size elements
	Vector(const Vector& r);	// copy ctor
	virtual ~Vector();
	T& operator[](int index);
		// return the specified element, throws exception when index <0 or >=m_nSize
	int size();		// return the size of the vector
	int inflate(int addSize);	// expand the storage to m_nSize+addSize, return the new size
private:
	T *m_pElements;
	int m_nSize;
};

template <class T>
Vector<T>::Vector(){
	m_nSize = 0;
	m_pElements = NULL;
}

template <class T>
Vector<T>::Vector(const Vector& r){
	m_nSize = r.m_nSize;
	m_pElements = r.m_pElements;
}

template <class T>
Vector<T>::Vector(int size): m_nSize(size){
	m_pElements = new T[m_nSize];
}

template <class T>
Vector<T>::~Vector(){
	delete [] m_pElements;
}

template <class T>
T& Vector<T>::operator [](int index){
	if (index >= m_nSize || index < 0)
		throw IndexOutofBounds(index);
	return m_pElements[index];
}

template <class T>
int Vector<T>::size(){
	return m_nSize;
}

template <class T>
int Vector<T>::inflate(int addSize){
	T* temp = new T[m_nSize+addSize];
	for(int i = 0; i < m_nSize; i++)
		temp[i] = m_pElements[i];
	m_nSize += addSize;
	m_pElements = temp;
	return m_nSize;
}
