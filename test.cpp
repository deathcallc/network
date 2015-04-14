#include <iostream>
#include <fstream>
#include "Model/SparseMatri/SparseMatriOpt.h"
#include "Service/DateInput.h"
#include "Cfg/Configuration.h"
#include "Service/PaperReader.h"

using namespace std;

#define FILE_PATH "./Cit-HepPh.txt"

int main()
{
	SpMatrix sp(NODE_NUM, NODE_NUM);
	sp.set(10000,10000,100);
	cout<<sp.get(10000,10000)<<endl;

	DateInput input(NODE_NUM, NODE_NUM);
	if(!access(FILE_PATH,F_OK))
	{
		cout<<"abccccc"<<endl;
	}
	
	ifstream in;
	in.open(FILE_PATH,ios::out | ios::app | ios::binary);
	input.readDate(in);
	in.close();

	PaperReader pr("/home/lxw/network/Date/e_AMiner-Paper.txt");
	pr.getNextPaper();
	return 0;
}
