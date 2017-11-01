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
	void addUser(int, string);
	int getUser(int);
	string getUserName(int);

private:
	vector<int> userIDs;
	vector<string> userNames;
};

Server::Server()
{
}

void Server::addUser(int user, string name)
{
	userIDs.push_back(user);
	userNames.push_back(name);
}

int Server::getUser(int i)
{
	return userIDs[i];
}

string Server::getUserName(int i)
{
	return userNames[i];
}


int main()
{
	Server a;

	a.addUser(0, "bob");
	a.addUser(1, "clare");
	a.addUser(2, "tim");

	cout << "id 1 is user: " << a.getUserName(1) << endl;

	return 0;
}