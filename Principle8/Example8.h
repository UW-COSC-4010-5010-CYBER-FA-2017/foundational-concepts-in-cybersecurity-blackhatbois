#include <iostream>
#include <string>
using namespace std;

class Adder{

private:
	int value;
	int value2;

public:
	Adder()
	{
		value = 0;
	}

	Adder(int n, int m)
	{
		value = n;
		value2 = m;
	}

	int add()
	{
		return value + value2;
	}


};