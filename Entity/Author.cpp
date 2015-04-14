#include <string.h>
#include <iostream>
#include "Author.h"

using namespace std;

void Author::setIndex(const int i)
{
	Author::index = i;
}

int Author::getIndex()
{
	return Author::index;
}

void Author::setName(const string& n)
{
	Author::name = n;
}

string Author::getName()
{
	return Author::name;
}

void Author::setAff(const string& a)
{
	Author::aff = a;
}

string Author::getAff()
{
	return Author::aff;
}

void Author::setPc(const int p)
{
	Author::pc = p;
}

int Author::getPc()
{
	return Author::pc;
}

void Author::setCn(const int c)
{
	Author::cn = c;
}
 
int Author::getCn()
{
	return Author::cn;
}

void Author::setHi(const double h)
{
	Author::hi = h;
}

double Author::getHi()
{
	return Author::hi;
}

void Author::setPi(const double p)
{
	Author::pi = p;
}

double Author::getPi()
{
	return Author::pi;
}

void Author::setUpi(const double u)
{
	Author::upi = u;
}

double Author::getUpi()
{
	return Author::upi;
}
