#include<iostream>
#include<string>
#include<map>
using namespace std;



int main()
{
	string temp;

	cout << "What would you like to access? (Hint: say 'everything')" << endl;

	cin >> temp;

	if (temp == "everything")
	{
		cout << "Woohoo everything is stolen" << endl;
	}
	else
	{
		cout << "Nothing there for that." << endl;
	}
	return 0;
}