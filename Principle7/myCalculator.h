// class for example 7
#include <iostream>
#include <string>
using namespace std;

class exampleCalculator{
private:
	int value;
	

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
