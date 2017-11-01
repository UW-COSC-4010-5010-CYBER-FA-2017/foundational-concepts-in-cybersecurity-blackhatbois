#include<iostream>
using namespace std;


void digestFood();
	void chew();
		void useJaws();
	void stomach();
		void swallow();
			void useEsophagus();
		void breakDown();
	void intestines();
		void smallIntestine();
		void largeIntestine();
		void rectum();


//This will show modularity by breaking down code into multiple functioning parts
//This wont actually produce anything that isnt symbolism, it is mostly just for fun
int main()
{
	digestFood();
	return 0;
}


void digestFood()
{
	chew();
	stomach();
	intestines();
	cout << "food digested\n";
}




void chew()
{
	//mechanical breakdown of food for easier digestion
	useJaws();
	cout << "food chewed\n";
}

void useJaws()
{
	//jaws have been used
	cout << "jaws have been used\n";
}




void stomach()
{
	//in order to get the food from the mouth to the stomach it must be swallowed
	swallow();

	//now it can be broken down
	breakDown();
	cout << "food done in the stomach\n";
}

void swallow()
{
	//need to use the esophagus to swallow, and get to the stomach
	useEsophagus();
	cout << "food has been swallowed\n";
}

void useEsophagus()
{
	//esophagus has been used
	cout << "esophagus used\n";
}

void breakDown()
{
	//through biological processes, the food has been broken down in the stomach
	cout << "food in stomach broken down\n";
}




void intestines()
{
	smallIntestine(); //goes through the small first
	largeIntestine(); //then the large
	rectum();
	cout << "food has gone through intestines\n";
}

void smallIntestine()
{
	//break down of lipids, proteins, and carbs. Then absorbed into the blood.
	cout << "Small intestines\n";
}

void largeIntestine()
{
	//absorb excess water
	cout << "Large intestines\n";
}

void rectum()
{
	//queue poop until restroom visit.
	cout << "food successfully converted to poo\n";
}