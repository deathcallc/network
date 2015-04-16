#include "AuthorReader.h"
#include "AuthorTemplate.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

AuthorReader::AuthorReader(string p)
{
	AuthorReader::fin.open(p.c_str(), ios::out | ios::app | ios::binary);
	AuthorReader::path = p;
}

AuthorReader::~AuthorReader()
{
	if(AuthorReader::fin.is_open())
	{
		AuthorReader::fin.close();
	}
}

bool AuthorReader::getNextAuthor(Author& p)
{
	p.clear();
	string::size_type pos;
	string str, strHead, content;
	while(!AuthorReader::fin.eof())
	{
		getline(AuthorReader::fin,str);
		if(0 == str.size())
		{
			return true;
		}
		pos = str.find(" ");
		strHead = str.substr(0, pos);
		content = str.substr(pos+1, -1);

		if(AUTHOR_INDEX == strHead)
		{
			p.setIndex(atoi(content.c_str()));
		}
		else if(AUTHOR_NAME == strHead)
		{
			p.setName(content);
		}
		else if(AUTHOR_AFF == strHead)
		{
			p.setAff(content);
		}
		else if(AUTHOR_PC == strHead)
		{	
			p.setPc(atoi(content.c_str()));
		}
		else if(AUTHOR_CN == strHead)
		{
			p.setCn(atoi(content.c_str()));
		}
		else if(AUTHOR_HI == strHead)
		{
			p.setHi(atof(content.c_str()));
		}
		else if(AUTHOR_PI ==  strHead)
		{
			p.setPi(atof(content.c_str()));
		}
		else if(AUTHOR_UPI == strHead)
		{
			p.setUpi(atof(content.c_str()));
		}
		else
		{

		}
		
	}
	return false;
}

void AuthorReader::split(string str, string p, vector<string>& vec)
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
