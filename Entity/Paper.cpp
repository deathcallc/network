#include "Paper.h"
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;


void Paper::setIndex(const int i)
{
	Paper::index = i;
}

void Paper::setTitle(const string t)
{
	Paper::title = t;
}

void Paper::setYear(const int y)
{
	Paper::year = y;
}

void Paper::setVenue(const string v)
{
	Paper::venue = v;
}

void Paper::setAbstract(const string a)
{
	Paper::abstract = a;
}

int Paper::getIndex()
{
	return Paper::index;
}

string Paper::getTitle()
{
	return Paper::title;
}

vector<string>& Paper::getAuthors()
{
	return Paper::authors;
}

vector<string>& Paper::getAff()
{
	return Paper::aff;
}

int Paper::getYear()
{
	return Paper::year;
}

string Paper::getVenue()
{
	return Paper::venue;
}

vector<int>& Paper::getRef()
{
	return Paper::ref;
}

string Paper::getAbstract()
{
	return Paper::abstract;
}


