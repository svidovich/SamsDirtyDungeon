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
		void checkstats(){
			cout << "HP: " << currenthealth << "/" << maxhealth << endl;
			cout << "MP: " << currentmana << "/" << maxmana << endl;
			cout << "XP: " << currentxp << endl;
		}
	};
}
