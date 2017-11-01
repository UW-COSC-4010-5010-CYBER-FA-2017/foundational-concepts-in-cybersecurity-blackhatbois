// Taylor Means & Jared Frank
// Example 7: 

#include <iostream>
#include <string>
#include "myCalculator.h"
using namespace std;

int main()
{
	int input;
	cout << "------ABSTRACTION FOR CALCULATOR CLASS-----" << endl;
	cout << "type an int value" << endl;
	cin >> input;

	exampleCalculator calc = exampleCalculator(input);

	cout << input << " minus " << input << " is " << calc.subtract() << endl;
	cout << input << " plus " << input << " is " << calc.add() << endl;
	cout << input << " times " << input << " is " << calc.multiply() << endl;
	cout << input << " divided by " << input << " is " << calc.divide() << endl;

}