#include "tree.h"

void Tree::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	ifst >> age;
}

void Tree::out_data(std::ofstream &ofst)
{
	ofst << "This is a tree: age = " << age << " years. ";
    Plant::out_data(ofst);
}

void Tree::out_tree(std::ofstream &ofst)
{
    out_data(ofst);
}


