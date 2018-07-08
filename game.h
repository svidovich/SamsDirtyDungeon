#include <string>
#include <iostream>
#include "stdio.h"
#include "inventory.h"
using namespace std;

namespace dungeon {
	class Game {
		public:
		Game(){};
		void run ()
		{
			dungeon::Inventory inventory = Inventory();
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
				if (command == "add")
				{
					string item;
					cout << "Enter item to add:" << endl;
					cin >> item;
					inventory.add(item);
					cout << endl << "Current inventory:\n";
					inventory.list();


				}
				else{
					cout << "Invalid command...";
					continue;
				}
			}
		}
	};
}
