#include "item.h"

// class constructor
item::item()
{

}

// class destructor
item::~item()
{

}

// set the name of the object
void item::setName(string newName)
{
	name = newName;
}

// print the name of the object
void item::printName() const
{
	cout << name << "\n";
}

// returns the item name
string item::getName() const
{
	return name;
}

// set the description of an item
void item::setDescription(string newDescription)
{
	description = newDescription;
}

// print the description of an item
void item::printDescription()
{
	cout << description << "\n\n";
}
