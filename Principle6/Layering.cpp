#include<iostream>
#include<string>
#include<map>
using namespace std;


//layering is the principle stating that in order to get to a destination
//multiple sets of security are to be implemented and overcome. So, the implementation
//of a login process should do fine to illustrate.
//The layer comes from both the username and password needing to be correct

//Correct usernames -> passwords: 
//steve101 -> stevespassword
//sillyDog2 -> !3xay#*T
//thecolorblue -> broncosFan12!



int main()
{
	map<string, string> logins;
	
	logins["steve101"] = "stevespassword";
	logins["sillyDog2"] = "!3xay#*T";
	logins["thecolorblue"] = "broncosFan12!";

	string temp1;
	string temp2;

	cout << "enter username\n";
	cin >> temp1;
	cout << "enter password\n";
	cin >> temp2;

	std::map<string, string>::key_compare mycomp = logins.key_comp();

	string h = logins.rbegin()->first;
	map<string, string>::iterator it = logins.begin();
	do {
		if (temp1 == it->first)
		{
			if (temp2 == it->second)
			{
				cout << "login successful\n";
				return 0;
			}
		}
	} while (mycomp((*it++).first, h));
	
	cout << "either username or password not correct\n";
	return 0;
}