#ifndef TREE_H
#define TREE_H
#include "plant.h"
#include <fstream>
#include <iostream>
using namespace std;

class Tree : public Plant
{
	long int age;
public:
    virtual void in_data(std::ifstream &ifst);
    virtual void out_data(std::ofstream &ofst);
    virtual void out_tree(std::ofstream &ofst);
	int check_number(std::ifstream &ifst, long int data);
};

#endif // TREE_H
