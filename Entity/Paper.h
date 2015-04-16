#ifndef PAPER_H
#define PAPER_H

#include <string.h>
#include <vector>
#include <iostream>

class Paper
{
private:
	int index;
	std::string title;
	std::vector<std::string> authors;
	std::vector<std::string> aff;
	int year;
	std::string venue;
	std::vector<std::string> ref;
	std::string abstract;
public:
	void setIndex(const int i);
	void setTitle(const std::string t);
	void setYear(const int y);
	void setVenue(const std::string v);
	void setAbstract(const std::string a);

	int getIndex();
	std::string getTitle();
	std::vector<std::string>& getAuthors();
	std::vector<std::string>& getAff();
	int getYear();
	std::string getVenue();
	std::vector<std::string>& getRef();
	std::string getAbstract();

	void clear();
	
	friend std::ostream& operator<<(std::ostream& out, Paper& p);

};


#endif
