#include <list>
#include <string>
#include <iostream>
#include "item.h"

using namespace std;

class player
{
private:
	// linked list stores player inventory items
	list<item> inventory;
	// holds the name of the player
	string name;
public:
	// class constructor
	player();
	// class destructor
	~player();
	// set the name of the player
	void setName(string);
	// print the name of the player
	void printName();
	// add an item to the player inventory
	void addInventory(item);
	// check if an item is in the player inventory
	bool isInventory(string);
	// print the items the player inventory
	void printInventory();
};
