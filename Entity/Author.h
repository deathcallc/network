#ifndef AUTHOR_H
#define AUTHOR_H

#include <string.h>

class Author
{
private:
	int index;
	std::string name;
	std::string aff;
	int pc;
	int cn;
	double hi;
	double pi;
	double upi;
public:
	void setIndex(const int i);
	int getIndex();
	void setName(const std::string& n);
	std::string getName();
	void setAff(const std::string& a);
	std::string getAff();
	void setPc(const int p);
	int getPc();
	void setCn(const int c);
	int getCn();
	void setHi(const double h);
	double getHi();
	void setPi(const double p);
	double getPi();
	void setUpi(const double u);
	double getUpi();
};

#endif
