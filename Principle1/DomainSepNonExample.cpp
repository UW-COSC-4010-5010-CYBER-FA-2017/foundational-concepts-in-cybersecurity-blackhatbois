#include <iostream>
#include <string>
using namespace std;


//regular domain
class Domain
{
public:
	Domain();
	void setVals(int);
	int getNumUsers();
private:
	int numUsers;
};

Domain::Domain()
{

}

void Domain::setVals(int a)
{
	numUsers = a;
}

int Domain::getNumUsers()
{
	return numUsers;
}


//specific domains
//east
class BadDomain : public Domain {
public:
	BadDomain(int);
	void setUserInfo(string,int);
	string getUserInfo(int);
private:
	string* userInfo;
};

BadDomain::BadDomain(int size)
{
	userInfo = new string[size];
}

void BadDomain::setUserInfo(string a, int i)
{
	userInfo[i] = a;
}

string BadDomain::getUserInfo(int i)
{
	return userInfo[i];
}

/*
//West
class WestDomain : public Domain {
public:
	WestDomain();
	void setUserInfo(string);
	string getUserInfo();
private:
	string userInfo;
};

WestDomain::WestDomain()
{

}

void WestDomain::setUserInfo(string a)
{
	userInfo = a;
}

string WestDomain::getUserInfo()
{
	return userInfo;
}
*/


//main
int main()
{
	Domain parent1;
	parent1.setVals(2);
	BadDomain newYork(2);
	newYork.setUserInfo("Jim",0);
	newYork.setUserInfo("Tina", 1);
	newYork.setVals(parent1.getNumUsers());



	cout << "All users: " << parent1.getNumUsers() << endl;

	cout << "Bad domain can see " << newYork.getNumUsers() << " users, "
		<< "and can specifically see and change " << newYork.getUserInfo(0)
		<< ", " << newYork.getUserInfo(1) << endl;


}