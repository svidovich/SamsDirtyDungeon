
#include "stats.h"
#include <iostream>
#include <fstream>
#include "stdio.h"
#include <string>

// This program reads the stats of a monster from a file
// and then it imbues an npc with those stats, and
// a name.
// Line by line, those stats go
// current hp | max hp | current mana | max mana | xp
// When the monster dies, the player is given the xp
// that the monster has.

using namespace std;
using namespace dungeon;

Statistics makestats(string monstername)
{
	filename = monstername + ".stats";
	ifstream fin;
	open_file(fin, filename);
	int stats[5];
	line = 0;
	while (! fin.eof())
	{
		fin >> stats[line];
		line++;
	}
	Statistics npcStats = Statistics(stats[0],stats[1],stats[2],stats[3],stats[4]);
	close_file(fin);
	return npcStats;
}

void open_file(ifstream& fin, string& filename)
{
	fin.open("stats/" + filename);
	if (fin.fail())
	{
		cout << "Opening file " + filename + " failed. Exiting.";
		exit(1);
	}
}

void close_file(ifstream& fin)
{
	fin.close();
}

