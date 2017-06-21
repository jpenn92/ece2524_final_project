#include "player.h"

// class constructor
player::player()
{

}

// class destructor
player::~player()
{

}

// set the name of the player
void player::setName(string newName)
{
	name = newName;
}

// print the name of the player
void player::printName()
{
	cout << name;
}

// add an item to the player inventory
void player::addInventory(item newItem)
{
	 inventory.push_back(newItem);
}

// check if an item is in the player inventory
bool player::isInventory(string useItem)
{
	for(list<item>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
	{	
		string temp = iterator->getName();
		if(temp == useItem)
			return 1;
	}
	return 0;
}

// print the items the player inventory
void player::printInventory()
{
	cout << "Your inventory:\n";
	for(list<item>::const_iterator iterator = inventory.begin(), end = inventory.end(); iterator != end; ++iterator)
	{
		string temp = iterator->getName();
		cout << temp << "\n";
	}
	cout << "\n";
}
