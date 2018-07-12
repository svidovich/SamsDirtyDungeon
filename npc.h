#ifndef __Npc__
#define __Npc__

#include <string>
#include <iostream>

#include "statistics.h"
#include "stdio.h"
#include "readstatistics.h"
using namespace std;

namespace dungeon {
	class Npc {
		public:
		string _name;
		Statistics _stats;
		Npc(string name, Statistics _stats){
			_name = name;
			_stats = makestats(_name);
		}
		bool isdead(){
			if (_stats.currenthealth <= 0)
			{
				cout << endl << _name + "Is dead!" << endl;
				cout << "You receive " + _stats.cxp + " experience points.";
				return true;
			}
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
	};
}

#endif
