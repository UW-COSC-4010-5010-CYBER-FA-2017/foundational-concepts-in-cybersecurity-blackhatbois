#include<iostream>
#include<vector>
#include<string>
using namespace std;

//This process will complete the task of adding user IDs to an array
//The process does not have access to any other information about the
//user other than the id. Theoretically some other process can bother with
//all other information, and make use of the vector here. 
class Server
{
public:
	Server();
	void addUser(int);
	int getUser(int);

private:
	vector<int> userIDs;
};

Server::Server()
{
}

void Server::addUser(int user)
{
	userIDs.push_back(user);
}

int Server::getUser(int i)
{
	return userIDs[i];
}



class Info : public Server
{
public:
	Info();
	string getUserName(int);
private:
	vector<string> userNames;
};


Info::Info()
{
	userNames.push_back("bob");
	userNames.push_back("steve");
	userNames.push_back("susie");
}

string Info::getUserName(int id)
{
	return userNames[id];
}

int main()
{
	Info a;

	a.addUser(0);
	a.addUser(1);
	a.addUser(2);

	cout << "id 1 is user: " << a.getUserName(1) << endl;

	return 0;
}