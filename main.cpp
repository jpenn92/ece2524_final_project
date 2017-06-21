#include <iostream>
#include "game.h"

using namespace std;

int main()
{
	//declare game object
	game theGame;
  
  // initialize game object
  theGame.gameInit();

	// run the game
	while(1)
	{
		theGame.run();
	}

return 0;
}
