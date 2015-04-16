#include <iostream>
#include <fstream>
#include <limits.h>
#include <set>
#include "Cfg/Configuration.h"
#include "Service/PaperReader.h"
#include "Entity/Paper.h"
#include "Pretreatment.h"

using namespace std;

void Pretreatment::paperDatePretreat(string path)
{

	int max = 0, min = INT_MAX;
	set<string> s;

	PaperReader pr(path);

	Paper p;
	
	while(pr.getNextPaper(p))
	{
		if(p.getYear() < min && p.getYear() != 0)
		{
			min = p.getYear();
		}

		if(p.getYear() > max)
		{
			max = p.getYear();
		}

		s.insert(p.getVenue());
	}

	ofstream fout;
	fout.open("./paperResult", ios::out);
	fout<<"min : "<<min<<" max : "<<max<<endl;

	set<string>::iterator it;

	for(it=s.begin(); it != s.end(); it++)
	{
		fout<<*it<<endl;
	}

}
