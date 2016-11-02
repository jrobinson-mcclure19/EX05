//////////////////////////
// Jalen Robinson-McClure
// CS 172-2
// November 1st, 2016
// EX05_03 (12.8)
///////////////////////////

#include <iostream>
#include <vector>

using namespace std;
//template for class
template<typename T>

// classes
class Vector
{
	// private elements
private:
	T size;
	T element;
	// public elements
public:
	// empty vector with specified type
	template<typename T>
	Vector<T>()
	{
		vector<> Vector;
	}
	// vector with initial size and filled with default values
	template<typename T>
	Vector<T>(size: int)
	{
		vector<int> intVector;
	}
	// constructs a vector with initial size filled with specified values
	template<typename T>
	Vector<T>(size: int, defaultValue : elementType)
	{
		vector<int>; 
	}
	// appends the element 
	template<typename T>
	void push_back()
	{
		return elements[size++];
	}
	// removes teh last element form the vector
	template<typename T>
	void pop_back()
	{
		return element[size--];
	}
	// removes all elemets from the vector
	template<typename T>
	void clear()
	{
		delete;
	}
	// swaps contnets of one vector with the specified vector
	template<typename T>
	void swap(t& v1, T& v2)
	{
		T temp = v1 ; 
		v1 = v2;
		v2 = temp;
	}
	// returns the number of elements in the vector
	template<typename T>
	int size()
	{
		size = 0;
		return size;
	}
	// return true if vector is empty
	template<typename T>
	bool empty()
	{
		bool empty;
		return == 0;
	}
	//returns the element at the specified index in the vector 
	template<typename T>
	at(index: int) : elementType()
	{
		int element = 0;
		return element;
	}

};