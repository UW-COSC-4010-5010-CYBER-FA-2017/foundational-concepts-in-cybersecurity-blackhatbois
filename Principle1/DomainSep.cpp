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
class EastDomain : public Domain {
public:
	EastDomain();
	void setUserInfo(string);
	string getUserInfo();
private:
	string userInfo;
};

EastDomain::EastDomain()
{

}

void EastDomain::setUserInfo(string a)
{
	userInfo = a;
}

string EastDomain::getUserInfo()
{
	return userInfo;
}

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



//main
int main()
{
	Domain parent1;
		parent1.setVals(2);
	EastDomain newYork;
		newYork.setUserInfo("Jim");
		newYork.setVals(parent1.getNumUsers());
	WestDomain sanFran;
		sanFran.setUserInfo("Tina");
		sanFran.setVals(parent1.getNumUsers());


		cout << "All users: " << parent1.getNumUsers() << endl;

		cout << "East domain can see " << newYork.getNumUsers() << " users, "
			<< "but only can specifically see and change " << newYork.getUserInfo() << endl;

		cout << "West domain can see " << sanFran.getNumUsers() << " users, "
			<< "but only can specifically see and change " << sanFran.getUserInfo() << endl;

}