#ifndef TREE_H
#define TREE_H

#include "plant.h"
#include <fstream>



class tree : public plant
{
	long int age;
public:
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual void outTree(std::ofstream &ofst);
	virtual void multimethod(plant *other, std::ofstream &ofst);
	virtual void mmTree(std::ofstream &ofst);
	virtual void mmBush(std::ofstream &ofst);
	virtual void mmFlower(std::ofstream &ofst);
};



#endif // TREE_H
