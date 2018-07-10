#ifndef __Room__
#define __Room__
#include <string>
#include <iostream>
#include "stdio.h"
#include "inventory.h"
#include "stats.h"
#include "npc.h"

namespace dungeon {
	class Room {
	public:
	dungeon::Inventory roominventory = Inventory();
	dungeon::Inventory doors = Inventory();
	dungeon::Npc enemies[1];
	bool chest;
	bool islit;
	bool trapexists;

	Room(){
		Statistics npcStats = Statistics(25, 25, 10, 10, 45);
		Npc Willis_Snarf = Npc("Willis_SNArf",npcStats);
		enemies[0] = Willis_Snarf;
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
		
		cout << "You see " << enemies[0]._name << "!" << endl;
		enemies[0]._stats.checkstats();
		cout << endl;

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

#endif
