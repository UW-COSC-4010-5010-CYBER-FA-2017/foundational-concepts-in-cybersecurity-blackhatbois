#include<iostream>
using namespace std;


class Process
{
public:
	Process(int);
	void doStuff(int, int);
	
	int* memory;
};

Process::Process(int size)
{
	memory = new int[size];
}

void Process::doStuff(int content, int index)
{
	memory[index] = content;
}



int main()
{
	Process p1(2);
	Process p2(4);

	p1.doStuff(245, 0);
	p2.doStuff(12, 3);

	cout << p1.memory[0] << endl;
	cout << p2.memory[3] << endl;
	//as we can see by this demonstration, p1 can only 'do stuff' with its own memory slots
	//and the same with p2.
	return 0;
}