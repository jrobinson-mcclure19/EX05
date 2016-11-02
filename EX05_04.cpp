/////////////////////////////
// Jalen Robisnon-McClure
// CS 172-1
// November 1st, 2016
// EX 05_04
/////////////////////////////

#include<iostream>
#include <vector>
#include <ctime>
using namespace std;

// array
const int Array[10] = { 1,2,3,4,5,6,7,8,9,10 };

// template 
template<typename T>
// shuffle function
void shuffle(vector<T> &V)
{
	// puts numbers in random order
	srand(time(0));
	for (int i = 0; i < 10; i++;)
	{
		int index = rand() % 10;
		int temp = Array[i];
		Array[i] = Array[index];
		Array[index] = temp;
	}
	// displays the numbers in a new order
	for (int i = 0; i < 10; i++)
	{
		cout << Array[];
	}
}

int main()
{
	// create vector
	vector<int>Array;
	// shuffle function
	shuffle(Array);
}