#include <string>
#include <iostream>
#include "stdio.h"
#include "inventory.h"
#include "room.h"
#include "stats.h"
using namespace std;

namespace dungeon {
	class Game {
		public:
		Game(){};
		void run ()
		{
			dungeon::Inventory playerinventory = Inventory();
			dungeon::Room currentroom = Room();
			dungeon::Statistics playerstats = Statistics(10,10,10,10,0);
			playerinventory.add("torch");
			string command;
			while (true) 
			{
				cout << "Enter command:\n";
				cin >> command;
				if (command == "exit")
				{
					cout << "exiting." << endl;
					break;
				}
				else if (command == "add")
				{
					string item;
					cout << "Enter item to add:" << endl;
					cin >> item;
					playerinventory.add(item);
					cout << endl << "Current inventory:\n";
					playerinventory.list();

				}
				else if (command == "look")
				{
					currentroom.look();
				}
				else if (command == "backpack")
				{
					playerinventory.list();
				}
				else if (command == "help")
				{
					cout << "Commands are:\nexit: Leave the game.\nadd: Put an item in your backpack.\nlook: Look around.\nbackpack: Check your backpack.\nstats: Show currents stats.\nhelp: Print this!\n";
				}
				else if (command == "stats")
				{
					playerstats.checkstats();
				}
				else{
					cout << "Invalid command...";
					continue;
				}
			}
		}
	};
}
