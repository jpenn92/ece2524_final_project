#include "player.h"
#include "room.h"
#include "item.h"
#include <cstdlib>
#include <curses.h>

class game
{
private:
	// input from user
	string input;
	// input string data before the first space
	string string1;
	// input string data after the first space
	string string2;
	// command is used for switch statements
	int command;
	// the current room object
	room currentRoom;
	// the current item being used
	item currentItem;
	// the player object
	player patient;

	// rooms in the game
	room patientroom1;
	room patientroom2;
	room patientroom3;
	room bathroom;
	room hallway2ndfloor;
	room stairs;
	room lobby;
	room wardenoffice;
	room lab;
	room operatingroom;
	room solitaryconfinement;
	room solitaryconfinementdoor;
	room hallway1stfloor;
	room courtyard;
	room guardhouse;
	room guardhousedoor;

	// items in the game
	item clothing;
	item patientlisting;
	item journal;
	item hairpin;
	item severedhead;
	item map;
	item drawing;
	item emptysyringes;
	item pileofbones;
	item pen;
	item cigar;
	item bandages;
	item scalpel;
	item beaker;
	item vial;
	
	// drawings in the game
	string amap;
	string adrawing;
public:
	// class constructor
	game();
	// class destructor
	~game();
	// initializes the game
	void gameInit();
	// prints a welcome message
	void outputWelcome();
	// prints the room information
	void outputRoom();
	// gets input string from the user
	bool getInput();
	// checks the input string entered by the user
	bool checkInput();
	// runs the game
	void run();
};
