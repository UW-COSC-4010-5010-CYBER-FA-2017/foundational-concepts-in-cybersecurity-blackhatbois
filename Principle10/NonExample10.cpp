// Taylor Means & Jared Frank
// NonExample 10

#include <iostream>
#include <string>
#include <array>
using namespace std;

class addArray
{
public:
	int value1;
	int value2;
	int baseArray[2];

	addArray()
	{
		value1 = 0;
		value2 = 0;
		setValue();
	}

	addArray(int a, int b)
	{
		value1 = a;
		value2 = b;
		setValue();
	}

	void setValue()
	{
		baseArray[0] = value1;
		baseArray[1] = value2;
	}

	int execution()
	{
		return baseArray[0] + baseArray[1];
	}


};


int main()
{
	int input;
	int input2;
	cout << "Type two ints and they'll be added together." << endl;
	cin >> input >> input2;

	cout << "I will now calculate " << input << " + " << input2 << endl;

	addArray obj = addArray(input, input2);
	cout << "The sum is " << obj.execution() << endl;
}