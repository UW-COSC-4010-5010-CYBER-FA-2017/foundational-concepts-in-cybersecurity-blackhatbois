// Taylor Means & Jared Frank
// NonExample 8: 

#include <iostream>
#include <string>
#include "Example8.h"
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

	cout << "I cannot manipulate the client code to manually change the values in the adder object, since the data fields are private, hiding the data." << endl;
	

}