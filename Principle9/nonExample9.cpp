// Taylor Means & Jared Frank
// NonExample 9: 

#include <iostream>
#include <string>
using namespace std;

int factorial(int);
int factorialHelp(int);
int subtractor(int);
int returner(int);

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
		return returner(i);
	int k = subtractor(i);
	return returner(i*factorialHelp(k));
}

int factorialHelp(int i)
{
	return factorial(i);
}

int subtractor(int i)
{
	int k = i - 1;
	return k;
}

int returner(int i)
{
	int returnValue = i;
	return returnValue;
}