#include <string>
#include <iostream>
#include "stdio.h"
using namespace std;

namespace dungeon {
	class Game {
		public:
			Game(){};
			void run ()
			{
				string command;
				while (true) 
				{
					cin >> command;
					cout << command << endl;
				}
			}
	};
}
