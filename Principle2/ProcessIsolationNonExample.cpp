#include<iostream>
using namespace std;



int main()
{
	int p1[2] = { 2,5 };
	int p2[3] = { 23, 5, 7 };

	int memory[5] = { 1,2,3,4,5 };

	int temp;
	

	//with both "processes" trying to access the same allocated memory there can be many
	//problems that occur because the user has no idea what the value of the memory is
	//after it has been altered by the processes.
	//This is just to show that if the processes have different values in stacks and
	//say p1 swaps something in and out, then p2 tries to get the same memory location,
	//p2 will be expecting something completely different than what it received.
	temp = p1[0];
	p1[0] = memory[3];
	memory[3] = temp;

	temp = p2[2];
	p2[2] = memory[3];
	memory[3] = temp;

	return 0;
}