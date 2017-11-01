// Taylor Means & Jared Frank
// NonExample 7: 

#include <iostream>
#include <string>
using namespace std;
int value;

class exampleCalculator{
public:
	exampleCalculator()
	{
		value = 0;
	}

	exampleCalculator(int n)
	{
		value = n;
	}

	int add()
	{
		return value + value;
	}

	int subtract()
	{
		return value - value;
	}

	int multiply()
	{
		return value * value;
	}

	int divide()
	{
		return value / value;
	}


};

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