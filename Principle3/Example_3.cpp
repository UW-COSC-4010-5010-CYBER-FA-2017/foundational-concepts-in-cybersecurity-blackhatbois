// Taylor Means & Jared Frank
// Example 3: Resource Encapulation

#include <iostream>
#include <string>
using namespace std;

class FlagPole{
private:
	bool flagOn;
	bool flagRaised;

public:
	FlagPole()
	{
		flagOn = false;
		flagRaised = false;
	}

	void putOn()
	{
		if (flagOn == false) {
			flagOn = true;
			cout << "Flag has been placed on the pole." << endl;
		}
		else
			cout << "Flag is already on the pole." << endl;
	}

	void takeOff()
	{
		if (flagRaised == true) {
			cout << "Cannot take off the flag! It is raised!" << endl;
		}
		else
		{
			cout << "The flag has been removed." << endl;
			flagOn = false;
		}
	}

	void raiseFlag()
	{
		if (flagRaised)
		{
			cout << "The flag is already raised..." << endl;
		}
		else if (!flagOn)
		{
			cout << "The flag is not on the pole" << endl;
		}
		else {
			flagRaised = true;
			cout << "The flag has been raised." << endl;
		}
	}

	void lowerFlag()
	{
		if (flagRaised) {
			flagRaised = false;
			cout << "The flag has been lowered." << endl;
		}
		else
		{
			cout << "the flag is already not raised." << endl;
		}
	}
};



int main()
{
	bool done = false;
	string input;
	FlagPole pole;
	cout << "please verify that you are the flag pole admin. Enter the password." << endl;
	cin >> input;
	if (input != "ilikeflags")
	{
		cout << "IMPROPER PASSWORD. ABORT" << endl;
		return 0;
	}


	cout << "Password verified. Type 'putOn', 'takeOff', 'raise', 'lower', or 'done'." << endl;
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

