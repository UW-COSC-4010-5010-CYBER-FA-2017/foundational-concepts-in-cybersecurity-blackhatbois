// Taylor Means & Jared Frank
// Example 3: Resource Encapulation

#include <iostream>
#include <string>
using namespace std;

class FlagPole{
public:
	bool flagOn;
	bool flagRaised;

	FlagPole()
	{
		flagOn = false;
		flagRaised = false;
	}

	void putOn()
	{
			flagOn = true;
			cout << "Flag has been placed on the pole." << endl;
	}

	void takeOff()
	{
			cout << "The flag has been removed." << endl;
			flagOn = false;
	}

	void raiseFlag()
	{
			flagRaised = true;
			cout << "The flag has been raised." << endl;
	}

	void lowerFlag()
	{
			flagRaised = false;
			cout << "The flag has been lowered." << endl;
	}
};



int main()
{
	bool done = false;
	string input;
	FlagPole pole;

	cout << "Type 'putOn', 'takeOff', 'raise', 'lower', or 'done'." << endl;
	while (!done)
	{

		cin >> input;
		if (input == "putOn")
			pole.putOn();
		else if (input == "takeOff")
			pole.takeOff();
		else if (input == "raise")
			pole.raiseFlag();
		else if (input == "lower")
			pole.lowerFlag();
		else if (input == "done")
			done = true;
		else
			cout << "Wrong input. try again." << endl;


	}

	return 0;
}

