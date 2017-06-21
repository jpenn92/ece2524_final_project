#include <string>
#include <list>
#include "item.h"

using namespace std;

class room
{
private:
	// linked list contains room items
	list<item> items;
	// linked list contains adjacent rooms
	list<string> adjacentRooms;
	// holds the name of the room
	string name;
	// holds the room description
	string description;
public:
	// class constructor
	room();
	// class destructor
	~room();
	// add an item to the room
	void addItem(item);
	// remove an item from the room
	void removeItem(item);
	// print the items in a room
	void printItems();
	// add an ajacent room
	void addAdjacentRoom(string);
	// check if a room is adjacent to a room
	bool isAdjacentRoom(string);
	// print all adjacent rooms
	void printAdjacentRooms();
	// set the name of a room
	void setName(string);
	// print the name of a room
	void printName();
	// returns the name of a room
	string getName();
	// set the description of a room
	void setDescription(string);
	// print the description of a room
	void printDescription();
};
