#ifndef PAPERREADER_H
#define PAPERREADER_H

#include "../Entity/Paper.h"
#include <string.h>
#include <fstream>
#include <vector>

class PaperReader
{
private:
	std::string path;
	std::ifstream fin;
	void split(std::string str, std::string p, std::vector<std::string>& vec);
public:
	PaperReader(std::string p);
	~PaperReader();
	bool getNextPaper(Paper& p);

};

#endif
