#include "tree.h"

void Tree::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	age = check_number(ifst,age);
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
int Tree::check_number(std::ifstream &ifst, long int data)
{
	ifst >> data;
	if (ifst.fail())
	{
		cout << "Error while reading file!" << endl;
		exit(1);
	}
	if (data < 0)
	{
		cout << "Wrong tree age!" << endl;
		exit(1);
	}
	return data;
}

