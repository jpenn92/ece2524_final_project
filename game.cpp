#include "game.h"

// class constructor
game::game()
{
	
}

// class destructor
game::~game()
{

}

// initializes the game
void game::gameInit()
{
	amap = 
	"  Second Floor_______________________								\r\n"
	"  |                |                |								\r\n"
	"  |    Bathroom    |    Patient     |								\r\n"
	"  |                |    Room 1      |								\r\n"
	"  |______    ______|______    ______|_______						\r\n"
	"  |                                 |       |						\r\n"
	"  |     Second Floor Hallway         Stairs |						\r\n"
	"  |______    ______________    _____|_______|						\r\n"
	"  |                |                |								\r\n"
	"  |    Patient     |    Patient     |								\r\n"
	"  |    Room 2      |    Room 3      |								\r\n"
	"  |________________|________________|								\r\n"
	"  																	\r\n"
	"  																	\r\n"
	"  																	\r\n"
	"  First Floor_______________________________________				\r\n"
	"  |                |                |              |              	\r\n"
	"  |    Lab         |    Operating   |       Lobby  |				\r\n"
	"  |                |    Room        |              |	Courtyard	\r\n"
	"  |______    ______|______    ______|_______       |				\r\n"
	"  |                                 |       |       				\r\n"
	"  |     First Floor Hallway          Stairs |          			\r\n" 
	"  |______    ______________    _____|_______|               ____________	\r\n"
	"  |                |                |              |        |           |	\r\n"
	"  |    Solitary    |    Warden      |              |        |  Guard    |	\r\n"
	"  |    Confinement |    Office      |              |        |  House    |	\r\n"
	"  |________________|________________|______________|        |___________|	\r\n";

	adrawing = 
	"      (                      )			\r\n"
	"      ||    _,--------._    / |		\r\n"
	"      | `.,'            `. /  |		\r\n"
	"      `  '              ,-'   '		\r\n"
	"       |/_         _   (     /			\r\n"
	"      (,-.`.    ,',-.`. `__,'			\r\n"
	"       |/#| ),-','#|`= ,'.` |			\r\n"
	"       `._/)  -'.|_,'   ) ))|			\r\n"
	"       /  (_.)|     .   -'//			\r\n"
	"      (  /|____/|    ) )`'|			\r\n"
	"       | |V----V|  ' ,    |			\r\n"
	"        |`- -- -'   ,'   |  |      _____	\r\n"
	" ___    |         .'    | |  `._,-'     `-	\r\n"
	"    `.__,`---^---'       | ` -'		\r\n"
	"       -.______  | . /  ______,-		\r\n";

	clothing.setName("tattered clothing");
	clothing.setDescription("The clothes fit quite nicely...");

	patientlisting.setName("patient listing");
	patientlisting.setDescription("Room 1: Darren Maczka\nRoom 2: Dennis Ritchie\nRoom 3: Ken Thompson");

	journal.setName("journal");
	journal.setDescription("");

	hairpin.setName("hair pin");
	hairpin.setDescription("The hair pin is slightly bent and rusty...");

	severedhead.setName("severed head");
	severedhead.setDescription("The head looks like one of your college professors...");

	emptysyringes.setName("empty syringes");
	emptysyringes.setDescription("There is a slight residue inside the syringes.  It looks like some sort of black goo...");

	pileofbones.setName("pile of bones");
	pileofbones.setDescription("The bones appear to be human, but you are not sure...");

	pen.setName("pen");
	pen.setDescription("The pen looks very expensive...");

	cigar.setName("cigar");
	cigar.setDescription("The cigar is Cuban.  If only you had a lighter...");

	bandages.setName("bandages");
	bandages.setDescription("The bandages are soaked in blood and other bodily fluids.  They make you feel sick...");

	scalpel.setName("scalpel");
	scalpel.setDescription("The scalpel blade is so dull that it probably could not cut paper...");

	beaker.setName("beaker");
	beaker.setDescription("The beaker hold some kind of black goo...");

	vial.setName("vial");
	vial.setDescription("The bial looks like it holds blood, but you aren't sure...");

	map.setName("map");
	map.setDescription(amap);

	drawing.setName("drawing");
	drawing.setDescription(adrawing);

	patientroom1.setName("patient room 1");
	patientroom1.setDescription("Entering the room you feel a slight breeze as the window is cracked. The tattered curtains sway back-and-forth projecting shadows on the opposing wall. On the night-stand you find a drawing of a horribly disfigured man.");
	patientroom1.addAdjacentRoom("hallway 2nd floor");
	patientroom1.addItem(drawing);
	    
	patientroom2.setName("patient room 2");
	patientroom2.setDescription("This room feels familiar to you. On the ground there is a journal with all of the pages but one removed.");
	patientroom2.addAdjacentRoom("hallway 2nd floor");
	patientroom2.addItem(journal);
	
	patientroom3.setName("patient room 3");
	patientroom3.setDescription("The room is empty and there are hundreds of scratches and marks on the wooden-paneled walls. Among these marks you notice '2' '5' '2' '4'. A pile of bones sits in the corner.");
	patientroom3.addAdjacentRoom("hallway 2nd floor");
	patientroom3.addItem(pileofbones);
	
	bathroom.setName("bathroom");
	bathroom.setDescription("A mirror is located on the adjacent wall to the entrance. Looking into it you see yourself. With blood-shot eyes and veins protruding from your neck, you stare in disbelief. You see a shadow walk behind you in the mirror, but turn around to see nothing.");
	bathroom.addAdjacentRoom("hallway 2nd floor");
	
	hallway2ndfloor.setName("hallway 2nd floor");
	hallway2ndfloor.setDescription("Upon exiting the stairwell, you are greeted by a rush of warm air and the smell of decomposing bodies. A lone light hangs from the cealing, flickering as it slowly sways. The doors on this floor are cracked open.");
	hallway2ndfloor.addAdjacentRoom("patient room 1");
	hallway2ndfloor.addAdjacentRoom("patient room 2");
	hallway2ndfloor.addAdjacentRoom("patient room 3");
	hallway2ndfloor.addAdjacentRoom("bathroom");
	hallway2ndfloor.addAdjacentRoom("stairs");
	
	stairs.setName("stairs");
	stairs.setDescription("For an abandoned building, these stairs would seem to be in decent shape if it wasn't for the thick layer of dried blood that coated each step.");
	stairs.addAdjacentRoom("hallway 2nd floor");
	stairs.addAdjacentRoom("lobby");
	
	lobby.setName("lobby");
	lobby.setDescription("What once was a nice entrance to the building is in disarray. Planted pots have been turned and the windows are shattered. Blood stains lead out of the building and a severed head is in the corner of the room.");
	lobby.addAdjacentRoom("hallway 1st floor");
	lobby.addAdjacentRoom("courtyard");
	lobby.addAdjacentRoom("stairs");
	lobby.addItem(severedhead);
	
	wardenoffice.setName("warden office");
	wardenoffice.setDescription("The room is nicely decorated with rich colored wood and a large leather chair. From the ceiling, the entrails of an unknown creature hang. Below this there is a pile of blood-splattered documents. One detailing the layout of the building. One is a listing of patients. In the top drawer of the desk you find a pen and a cigar.");
	wardenoffice.addAdjacentRoom("hallway 1st floor");
	wardenoffice.addItem(map);
	wardenoffice.addItem(patientlisting);
	wardenoffice.addItem(pen);
	wardenoffice.addItem(cigar);
	
	lab.setName("lab");
	lab.setDescription("On the wall is a diagram of the human body with marks that seem to pin-point locations to inject some kind of medication. The opposing side of the room has a table with empty vials and beakers.");
	lab.addAdjacentRoom("hallway 1st floor");
	lab.addItem(vial);
	lab.addItem(beaker);
	
	operatingroom.setName("operating room");
	operatingroom.setDescription("An examination table is centered in the room with demolished leather restraints. Some bloody bandages lay on the wayside, and there is a bloody scalpel on the table. On the ground are numerous syringes that are empty.");
	operatingroom.addAdjacentRoom("hallway 1st floor");
	operatingroom.addItem(emptysyringes);
	operatingroom.addItem(scalpel);
	operatingroom.addItem(bandages);
	
	// starting room
	solitaryconfinement.setName("solitary confinement");
	solitaryconfinement.setDescription("You have awoken to find yourself laying in the middle of a white-padded room. The single light-bulb above you flickers inconsistently, and there are no signs of life around you. Across from you there is a battered door that appears to be locked.");
	solitaryconfinement.addAdjacentRoom("solitary confinement door");
	solitaryconfinement.addItem(hairpin);
	solitaryconfinement.addItem(clothing);

	solitaryconfinementdoor.setName("solitary confinement door");
	solitaryconfinementdoor.setDescription("The battered door has a lock.");
	solitaryconfinementdoor.addAdjacentRoom("solitary confinement");
	
	hallway1stfloor.setName("hallway 1st floor");
	hallway1stfloor.setDescription("Except for the red glow of the exit sign, the hallway is dark.");
	hallway1stfloor.addAdjacentRoom("lab");
	hallway1stfloor.addAdjacentRoom("operating room");
	hallway1stfloor.addAdjacentRoom("solitary confinement");
	hallway1stfloor.addAdjacentRoom("warden office");
	hallway1stfloor.addAdjacentRoom("lobby");
	
	courtyard.setName("courtyard");
	courtyard.setDescription("It is slightly raining and there are muddy footprints leading out of the now closed front gate. The entire yard is surrounded by a large fence topped with barbed wire. At the gate entrance there is a small building with a combination lock, requiring four numbers, on the door.");
	courtyard.addAdjacentRoom("lobby");
	courtyard.addAdjacentRoom("guard house door");
	
	// ending room?
	guardhouse.setName("guard house");
	guardhouse.setDescription("There is a small television recording the surveillance of the different rooms onto tape. You begin to rewind the video, watching yourself explore the unknown surroundings. Once at the beginning of the tape, you see yourself laying on the operation table while a group of doctors inject you with syringes. You immediately remove yourself from the table and begin attacking the doctors. Terrified they flee, but cannot outrun you, as you attack them. Then, as if nothing happened, you slowly walk into the white-padded room, locking yourself inside.");
	guardhouse.addAdjacentRoom("courtyard");

	guardhousedoor.setName("guard house door");
	guardhousedoor.setDescription("The door is locked with a numeric key-pad.\n\n HINT: type 'use <code>'");
	guardhousedoor.addAdjacentRoom("courtyard");
}

// prints a welcome message
void game::outputWelcome()
{
	system("clear");
	cout << "Welcome, ";
	patient.printName();
	cout << ", to the Woodbury Asylum.  You have been admitted because you have been diagnosed with a serious mental illness.  Our doctors will work their best to help you recuperate.\n\n";
	cout << "To explore the psychiatric institute, you can type the following:\n";
	cout << "- To move between rooms        'move <adjacent room name>'\n";
	cout << "- To pick up an item           'pickup <item>'\n";
	cout << "- To use an item               'use <item>'\n";
	cout << "- To get the room info         'info'\n";
	cout << "- To show your inventory       'show'\n";
	cout << "- To get help with commands    'help'\n";
	cout << "- To exit                      'exit'\n\n";
	cout << "Enjoy your stay!\n\n";
	cout << "Press 'ENTER' to play!";
	cin.ignore();
}

// prints the room information
void game::outputRoom()
{
	system("clear");
	currentRoom.printName();
	currentRoom.printDescription();
	currentRoom.printItems();
	currentRoom.printAdjacentRooms();
}

// gets input string from the user
bool game::getInput()
{
 	input.clear();
	string1.clear();
	string2.clear();

	cout << "What do you do?" << endl;
	getline(cin, input);

	if(input == "exit")
		exit(0);
	if(input == "info")
		return 0;
	if(input == "help")
	{
		outputWelcome();
		return 0;
	}
	if(input == "show")
	{
		string1 = "show";
		return 1;
	}
	
	int i = 0;
	while((input[i] != ' ') && (i <= input.size()))
	{
		string1 += input[i];
		i++;
	}
	if(i < input.size())
		i++; 
	while(i < input.size())
	{
		string2 += input[i];
		i++;
	}
	return 1;
}

// checks the input string entered by the user
bool game::checkInput()
{
	if(string1 == "move")
	{
		command = 0;
		return 1;
	}
	else if(string1 == "pickup")
	{
		command = 1;
		return 1;
	}
	else if(string1 == "use")
	{
		command = 2;
		return 1;
	}
	else if(string1 == "show")
	{
		command = 3;
		return 1;
	}
	else
	{
	        command = 4;
		return 0;
	}
	    
}

// runs the game
void game::run()
{
	enum states {state_name, state_welcome, state_output, state_input, state_command, state_move, state_pickup, state_use, state_inventory, state_lock, state_end};
	states state = state_name;

	currentRoom = solitaryconfinement;

	bool endflag = false;

	// finite state machine
	while(1)
	{
		switch(state)
		{
		// game welcome state
		case state_name:
			system("clear");
			cout << "Please enter your name: ";
			getline(cin, input);
			patient.setName(input);
			state = state_welcome;
			break;
		case state_welcome:
			outputWelcome();
			state = state_output;
			break;
		// state to output the room info
		case state_output:
			outputRoom();
			state = state_input;
			break;
		// state to get input from the user
		case state_input:
			if(getInput() == 1)
			{
				if(checkInput() == 1)
				{
					state = state_command;
				}
				else
				{
					cout << "INVALID COMMAND\r\n\n";
                                                                                     
					state = state_input;
				}
			}
			else
				state = state_output;
			break;
		// state to determine the command from the user
		case state_command:
			switch(command)
			{
			case 0:
				if(currentRoom.isAdjacentRoom(string2) == 1)
					state = state_move;
				else
					state = state_input;
				break;
			case 1:
				if(patient.isInventory(string2) == 0)
					state = state_pickup;
				else
					state = state_input;
				break;
			case 2:
				if(patient.isInventory(string2) == 1)
					state = state_use;
				else if((string2 == "2524") &&  (currentRoom.getName() == "guard house door"))
				{
					currentRoom = guardhouse;
					state = state_end;
				}
				else
					state = state_input;
				break;
			case 3:
				state = state_inventory;
				break;
			default:
				state = state_input;
				break;
			}
			break;
		// state to move from one room to another
		case state_move:
			if(string2 == "patient room 1")
				currentRoom = patientroom1;
			else if(string2 == "patient room 2")
				currentRoom = patientroom2;
			else if(string2 == "patient room 3")
				currentRoom = patientroom3;
			else if(string2 == "bathroom")
				currentRoom = bathroom;
			else if(string2 == "hallway 2nd floor")
				currentRoom = hallway2ndfloor;
			else if(string2 == "stairs")
				currentRoom = stairs;
			else if(string2 == "lobby")
				currentRoom = lobby;
			else if(string2 == "warden office")
				currentRoom = wardenoffice;
			else if(string2 == "lab")
				currentRoom = lab;
			else if(string2 == "operating room")
				currentRoom = operatingroom;
			else if(string2 == "solitary confinement")
				currentRoom = solitaryconfinement;
			else if(string2 == "solitary confinement door")
				currentRoom = solitaryconfinementdoor;
			else if(string2 == "hallway 1st floor")
				currentRoom = hallway1stfloor;
			else if(string2 == "courtyard")
				currentRoom = courtyard;
			else if(string2 == "guard house")
			{
				currentRoom = guardhouse;
				endflag = true;
			}
			else if(string2 == "guard house door")
				currentRoom = guardhousedoor;
			else
			{
				state = state_input;
				break;
			}
			if(endflag == true)
				state = state_end;
			else
				state = state_output;
			break;
		// state to use an object
		case state_use:
			if(string2 == "map")
				currentItem = map;
			else if(string2 == "drawing")
				currentItem = drawing;
			else if(string2 == "tattered clothing")
				currentItem = clothing;
			else if(string2 == "severed head")
				currentItem = severedhead;
			else if(string2 == "patient listing")
				currentItem = patientlisting;
			else if(string2 == "journal")
				currentItem = journal;
			else if(string2 == "hair pin")
				currentItem = hairpin;
			else if(string2 == "empty syringes")
				currentItem = emptysyringes;
			else if(string2 == "pile of bones")
				currentItem = pileofbones;
			else if(string2 == "pen")
				currentItem = pen;
			else if(string2 == "cigar")
				currentItem = cigar;
			else if(string2 == "bandages")
				currentItem = bandages;
			else if(string2 == "scalpel")
				currentItem = scalpel;
			else if(string2 == "beaker")
				currentItem = beaker;
			else if(string2 == "vial")
				currentItem = vial;
			else
			{
				state = state_input;
				break;
			}
			state = state_lock;
			break;
		// state to pickup an item
		case state_pickup:
			if(string2 == "map")
				currentItem = map;
			else if(string2 == "drawing")
				currentItem = drawing;
			else if(string2 == "tattered clothing")
				currentItem = clothing;
			else if(string2 == "severed head")
				currentItem = severedhead;
			else if(string2 == "patient listing")
				currentItem = patientlisting;
			else if(string2 == "journal")
				currentItem = journal;
			else if(string2 == "hair pin")
				currentItem = hairpin;
			else if(string2 == "empty syringes")
				currentItem = emptysyringes;
			else if(string2 == "pile of bones")
				currentItem = pileofbones;
			else if(string2 == "pen")
				currentItem = pen;
			else if(string2 == "cigar")
				currentItem = cigar;
			else if(string2 == "bandages")
				currentItem = bandages;
			else if(string2 == "scalpel")
				currentItem = scalpel;
			else if(string2 == "beaker")
				currentItem = beaker;
			else if(string2 == "vial")
				currentItem = vial;
			else
			{
				state = state_input;
				break;
			}
			patient.addInventory(currentItem);
			cout << "\nYou have added the " << currentItem.getName() << " to your inventory.\n\n";
			currentRoom.removeItem(currentItem);
			state = state_input;
			break;
		// state to print the inventory
		case state_inventory:
			system("clear");
			patient.printInventory();
			cout << "Press 'ENTER' to continue...";
			cin.ignore();
			state = state_output;
			break;
		case state_lock:
			if((currentItem.getName() == "hair pin") && (currentRoom.getName() == "solitary confinement door"))
			{
				currentRoom = hallway1stfloor;
				state = state_output;
			}
			else
			{
				system("clear");
				currentItem.printDescription();
				cout << "Press 'ENTER' to continue...";
				state = state_output;
			}
			break;
		case state_end:
			currentRoom.printName();
			currentRoom.printDescription();
			cout << "THE END!\n\n";
			cout << "Press 'ENTER' to exit...";
			cin.ignore();
			exit(0);
		}
	}
}
