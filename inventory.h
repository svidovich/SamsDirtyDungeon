#ifndef __Inventory__
#define __Inventory__

#include <string>
#include <iostream>
#include "stdio.h"
using namespace std;

namespace dungeon {
   class Inventory {
                public:
                string inv[28];
                int index = 1;
                Inventory(){
                        for (int i=0; i<28; i++){
                                inv[i] = "";
                        } 
                };
                void add(string item){
                        inv[index++] = item; 
		}
                void list(){
                        for (int i=0; i<28; i++){
                                if (inv[i] != ""){
                                        cout << inv[i] << endl;
                                }
                        }
                }
		int count(){
			int numitems = 0;
			for ( int i = 0; i < 28; i++ ){
				if ( inv[i] != "" ){
					numitems += 1;
				}
			}
			return numitems;
		
		}
        };

}

#endif
