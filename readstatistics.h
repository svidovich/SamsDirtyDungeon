#ifndef __readstatistics__
#define __readstatistics__


#include "stats.h"
#include <iostream>
#include <fstream>
#include "stdio.h"
#include <string>

using namespace dungeon;
void open_file(ifstream& fin, string& filename);
void close_file(ifstream& fin);
Statistics makestats(string monstername);

#endif
