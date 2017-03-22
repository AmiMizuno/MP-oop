#include "plant.h"
#include "tree.h"
#include "bush.h"
#include <iostream>
#include <cctype>

namespace flora
{

plant* plant::in(std::ifstream &ifst)
{
	plant *p;
	int k;
	ifst >> k;
	switch (k)
	{
		case 1:
			p = new tree;
			break;
		case 2:
			p = new bush;
			break;
		default:
			return 0;
	}
	p->inData(ifst);
	return p;
}


void plant::inData(std::ifstream &ifst)
{
	ifst >> name;
}

void plant::outData(std::ofstream &ofst)
{
	ofst << "Name = " << plant::name << std::endl;
}
void plant::outTree(std::ofstream &ofst)
{
}


}
