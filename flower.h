#ifndef FLOWER_H
#define FLOWER_H

#include "plant.h"
#include <fstream>



class flower : public plant
{
	enum area { HOME, GARDEN, WILD };
	area growing;
public:
	virtual void InData(std::ifstream &ifst);
	virtual void OutData(std::ofstream &ofst);
	virtual void Multimethod(plant *other, std::ofstream &ofst);
	virtual void MmTree(std::ofstream &ofst);
	virtual void MmBush(std::ofstream &ofst);
	virtual void MmFlower(std::ofstream &ofst);
};


#endif // FLOWER_H
