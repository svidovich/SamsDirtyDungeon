#include <string>
#include <iostream>
#include "stdio.h"
using namespace std;

namespace dungeon {
	class Npc {
		public:
		string _name;
		Statistics _stats;
		Npc(string name, Statistics stats){
			_name = name;
			_stats = Statistics(stats);
		}
	};
}
