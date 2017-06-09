#ifndef TREE_H
#define TREE_H

#include "plant.h"
#include <fstream>



class tree : public plant
{
	long int age;
public:
	virtual void InData(std::ifstream &ifst);
	virtual void OutData(std::ofstream &ofst);
	virtual void OutTree(std::ofstream &ofst);
	virtual void Multimethod(plant *other, std::ofstream &ofst);
	virtual void MmTree(std::ofstream &ofst);
	virtual void MmBush(std::ofstream &ofst);
	virtual void MmFlower(std::ofstream &ofst);
};



#endif // TREE_H
