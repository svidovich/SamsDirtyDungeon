#include <string>
#include <iostream>
#include "stdio.h"
#include "inventory.h"

namespace dungeon {
	class Room {
	public:
	dungeon::Inventory roominventory = Inventory();
	dungeon::Inventory enemies = Inventory();
	dungeon::Inventory doors = Inventory();
	bool chest;
	bool islit;
	bool trapexists;

	Room(){
		// North door?
		doors.add("1");
		// East door?
		doors.add("");
		// West door?
		doors.add("");
		// South door?
		doors.add("");
		chest = true;
		islit = true;
		trapexists = true;
	}

	void look(){
		if ( islit ){
		
		cout << "You see " << doors.count() << " doors.\n";	
			if ( chest ){
				cout << "You see a chest.\n";
			}
			if ( trapexists ){
				cout << "The room seems to be trapped.\n";
			}
			else {
				cout << "It is too dark to see...\n";
			}
		}

	}
	
	
	};





}
