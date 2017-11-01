// Taylor Means & Jared Frank
// NonExample 8: 

#include <iostream>
#include <string>
#include "nonExample8.h"
using namespace std;


int main()
{
	int input;
	int input2;
	cout << "type two int values" << endl;
	cin >> input >> input2;

	Adder adder = Adder(input, input2);

	cout << "the two values in the object is " << input << " and " << input2 << endl;
	cout << input << " plus " << input2 << " is " << adder.add() << endl;

	adder.value = 10;
	adder.value2 = 15;
	cout << "I have manipulated the client code to manually change the values in the adder object, thus ruining Data Hiding, as the underlying mechanisms are exposed and manipulated by reading the header file." << endl;
	cout << "using the same object from above: " << input << " plus " << input2 << " is now " << adder.add() << " due to the exposure of this principle." << endl;
	

}