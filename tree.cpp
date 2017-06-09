#include "tree.h"



void tree::InData(std::ifstream &ifst)
{
	plant::InData(ifst);
	ifst >> age;
}

void tree::OutData(std::ofstream &ofst)
{
	ofst << "This is a tree: age = " << age << " years. ";
	plant::OutData(ofst);
}

void tree::OutTree(std::ofstream &ofst)
{
	OutData(ofst);
}

void tree::Multimethod(plant *other, std::ofstream &ofst)
{
	other->MmTree(ofst);
}

void tree::MmTree(std::ofstream &ofst)
{
	ofst << "Tree and Tree" << std::endl;
}

void tree::MmBush(std::ofstream &ofst)
{
	ofst << "Bush and Tree" << std::endl;
}

void tree::MmFlower(std::ofstream &ofst)
{
	ofst << "Flower and Tree" << std::endl;
}


