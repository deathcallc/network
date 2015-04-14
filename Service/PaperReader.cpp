#include "PaperReader.h"
#include <iostream>
#include <string.h>

using namespace std;

PaperReader::PaperReader(string p)
{
	PaperReader::fin.open(p.c_str(), ios::out | ios::app | ios::binary);
	PaperReader::path = p;
}

PaperReader::~PaperReader()
{
	if(PaperReader::fin.is_open())
	{
		PaperReader::fin.close();
	}
}

Paper& PaperReader::getNextPaper()
{
	Paper p;
	string::size_type pos;
	string str, strHead;
	while(!PaperReader::fin.eof())
	{
		getline(PaperReader::fin,str);
		if(0 == str.size())
		{
			return p;
		}
		pos = str.find(" ");
		strHead = str.substr(0, pos);
		cout<<strHead<<endl;
	}
	return p;
}
