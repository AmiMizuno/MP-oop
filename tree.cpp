#include "tree.h"

namespace flora
{

void tree::inData(std::ifstream &ifst)
{
	plant::inData(ifst);
	ifst >> age;
}

void tree::outData(std::ofstream &ofst)
{
	ofst << "This is a tree: age = " << age << " years. ";
	plant::outData(ofst);
}
void tree::outTree(std::ofstream &ofst)
{
	outData(ofst);
}



}
