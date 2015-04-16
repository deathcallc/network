#ifndef AUTHORREADER_H
#define AUTHORREADER_H

#include "../Entity/Author.h"
#include <string.h>
#include <fstream>
#include <vector>

class AuthorReader
{
private:
	std::string path;
	std::ifstream fin;
	void split(std::string str, std::string p, std::vector<std::string>& vec);
public:
	AuthorReader(std::string p);
	~AuthorReader();
	bool getNextAuthor(Author& p);

};

#endif
