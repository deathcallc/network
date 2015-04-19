#include "PaperReader.h"
#include "PaperTemplate.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

PaperReader::PaperReader(string p)
{
	PaperReader::fin.open(p.c_str(), ios::in | ios::app | ios::binary);
	PaperReader::path = p;
}

PaperReader::~PaperReader()
{
	if(PaperReader::fin.is_open())
	{
		PaperReader::fin.close();
	}
}

bool PaperReader::getNextPaper(Paper& p)
{
	p.clear();
	string::size_type pos;
	string str, strHead, content;
	while(!PaperReader::fin.eof())
	{
		getline(PaperReader::fin,str);

		if(0 == str.size())
		{
			return true;
		}
		pos = str.find(" ");
		strHead = str.substr(0, pos);
		content = str.substr(pos+1, -1);

		if(PAPER_INDEX == strHead)
		{
			p.setIndex(atoi(content.c_str()));
		}
		else if(PAPER_TITLE == strHead)
		{
			p.setTitle(content);
		}
		else if(PAPER_AUTHORS == strHead)
		{
			PaperReader::split(content, ";", p.getAuthors());
		}
		else if(PAPER_AFF == strHead)
		{	
			PaperReader::split(content, ";", p.getAff());
		}
		else if(PAPER_YEAR == strHead)
		{
			p.setYear(atoi(content.c_str()));
		}
		else if(PAPER_VENUE == strHead)
		{
			p.setVenue(content);
		}
		else if(PAPER_REF ==  strHead)
		{
			p.getRef().push_back(content);
		}
		else if(PAPER_ABS == strHead)
		{
			p.setAbstract(content);
		}
		else
		{

		}
		
	}
	return false;
}

void PaperReader::split(string str, string p, vector<string>& vec)
{
	string b, l;
	string::size_type pos;
	while((pos = str.find(p.c_str())) != str.npos)
	{
		b = str.substr(0, pos);
		str = str.substr(pos+1, -1);
		vec.push_back(b);
	}
	vec.push_back(str);
}
