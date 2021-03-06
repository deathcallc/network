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

vector<string>& Paper::getRef()
{
	return Paper::ref;
}

string Paper::getAbstract()
{
	return Paper::abstract;
}

void Paper::clear()
{
	index = 0;
	title = "";
	authors.clear();
	aff.clear();
	year = 0;
	venue = "";
	ref.clear();
	abstract = "";
}

ostream& operator<<(ostream& out, Paper& p)
{
	out<<"index : "<<p.index<<endl;
	out<<"title : "<<p.title<<endl;
	out<<"authors : ";
	for(size_t i = 0; i < p.authors.size(); i++)
	{
		out<<p.authors[i]<<" ; ";
	}
	out<<endl;
	out<<"aff : ";

	for(size_t i = 0; i < p.aff.size(); i++)
	{	
		out<<p.aff[i]<<" ; ";
	}
	out<<endl;
	out<<"ref : ";

	for(size_t i = 0; i < p.ref.size(); i++)
	{
		out<<p.ref[i]<<" ; ";
	}
	out<<endl;
	out<<"year : "<<p.year<<endl;
	out<<"venue : "<<p.venue<<endl;
	out<<"abstract : "<<p.abstract<<endl;
	return out;
}
