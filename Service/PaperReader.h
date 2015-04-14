#ifndef PAPERREADER_H
#define PAPERREADER_H

#include "../Entity/Paper.h"
#include <string.h>
#include <fstream>

class PaperReader
{
private:
	std::string path;
	std::ifstream fin;
public:
	PaperReader(std::string p);
	~PaperReader();
	Paper& getNextPaper();

};

#endif
