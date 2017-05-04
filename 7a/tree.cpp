#include "tree.h"


void tree::inData(std::ifstream &ifst)
{
	ifst >> age;
}

void tree::outData(std::ofstream &ofst)
{
	ofst << "This is a tree: age = " << age << " years, name = " << plant::name << std::endl;
}

void tree::multimethod(plant *other, std::ofstream &ofst)
{
	other->mmTree(ofst);
}

void tree::mmTree(std::ofstream &ofst)
{
	ofst << "Tree and Tree" << std::endl;
}

void tree::mmBush(std::ofstream &ofst)
{
	ofst << "Bush and Tree" << std::endl;
}


