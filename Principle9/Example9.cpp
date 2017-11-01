// Taylor Means & Jared Frank
// Example 9: 

#include <iostream>
#include <string>
using namespace std;

int factorial(int);

int main()
{
	int input;
	cout << "Type an int value to make it into it's factorial counterpart." << endl;
	cin >> input;

	cout << " I will now calculate " << input << "!" << endl;

	cout << "The factorial is " << factorial(input) << endl;
}

int factorial(int i)
{
	if (i <= 1)
		return 1;
	return i*factorial(i - 1);
}