#ifndef __Statistics__
#define __Statistics__

#include <string>
#include <iostream>
#include "stdio.h"
using namespace std;

namespace dungeon {
	class Statistics {
		public:

		int maxhealth;
		int currenthealth;
		int maxmana;
		int currentmana;
		int currentxp;
		Statistics(int ch, int mh, int cm, int mm, int cxp){
			currenthealth = ch;
			maxhealth = mh;
			currentmana = cm;
			maxmana = mm;
			currentxp = cxp;
		};
		Statistics(const Statistics &stats){
			currenthealth = stats.currenthealth;
			maxhealth = stats.maxhealth;
			currentmana = stats.currentmana;
			maxmana = stats.maxmana;
			currentxp = stats.currentxp;
		}
		void checkstats(){
			cout << "HP: " << currenthealth << "/" << maxhealth << endl;
			cout << "MP: " << currentmana << "/" << maxmana << endl;
			cout << "XP: " << currentxp << endl;
		}
	};
}
#endif
