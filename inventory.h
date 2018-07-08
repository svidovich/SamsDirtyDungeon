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
                        inv[0] = "torch";

                };
                void add(string item){
                        inv[index++] = item; 
			cout << "You added " << item << " to your inventory.";
                }
                void list(){
                        for (int i=0; i<28; i++){
                                if (inv[i] != ""){
                                        cout << inv[i] << endl;
                                }
                        }
                }
        };

}
