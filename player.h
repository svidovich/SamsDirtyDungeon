#include <string>
#include <iostream>
#include <fstream>

#include "readstatistics.h"
#include "statistics.h"
#include "inventory.h"
using namespace standard;

namespace dungeon {
	class Player {
		public:
			string name;
			Statistics stats;
			Inventory playerinventory;
			Player(string name, Statistics stats){
				name = name;
				stats = makestats(name);
			}
			void isdead(){
				if (stats.currenthealth <= 0(
				{
				cout << endl << "Oh dear, you are dead!" << endl;
				exit(1);
				}
			}
			void additem(string item){
				playerinventory.add(item);
				cout << endl << item + " added to inventory.\n";
			}
			void checkinventory() {
				playerinventory.list();
			}
			
			void decreasehp(int dmg){
				_stats.currenthp -= dmg;
			}
			void increasehp(int heal){
				_stats.currenthp += heal;
				if (_stats.currenthp > _stats.maxhp)
				{
					_stats.currenthp = _stats.maxhp;
				}
			}

	}

}
