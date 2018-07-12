#ifndef __readstatistics__
#define __readstatistics__

using namespace dungeon;
void open_file(ifstream& fin, string& filename);
void close_file(ifstream& fin);
Statistics makestats(string monstername);

#endif
