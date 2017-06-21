#ifndef ITEM
#define ITEM

#include <list>
#include <string>
#include <iostream>

using namespace std;

class item
{
private:
	// holds the name of the room
	string name;
	// holds the room description
	string description;
public:
	// class constructor
	item();
	// class destructor
	~item();
	// set the name of the object
	void setName(string);
	// print the name of the object
	void printName() const;
	// returns the item name
	string getName() const;
	// set the description of an item
	void setDescription(string);
	// print the description of an item
	void printDescription();
};

#endif
