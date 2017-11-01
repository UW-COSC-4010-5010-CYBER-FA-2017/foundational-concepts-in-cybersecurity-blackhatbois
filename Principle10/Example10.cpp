// Taylor Means & Jared Frank
// Example 10

#include <iostream>
#include <string>
#include <array>
using namespace std;

class Minimized
{
private:
	int value1;
	int value2;

public:
	Minimized()
	{
		value1 = 0;
		value2 = 0;
	}

	Minimized(int a, int b)
	{
		value1 = a;
		value2 = b;
	}



	int execution()
	{
		return value1 + value2;
	}


};


int main()
{
	int input;
	int input2;
	cout << "Type two ints and they'll be added together." << endl;
	cin >> input >> input2;

	cout << "I will now calculate " << input << " + " << input2 << endl;

	Minimized adderObj = Minimized(input, input2);
	cout << "The sum is " << adderObj.execution() << endl;
}