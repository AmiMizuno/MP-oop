#ifndef FLOWER_H
#define FLOWER_H

#include "plant.h"
#include <fstream>



class flower : public plant
{
	enum area { HOME, GARDEN, WILD };
	area growing;
public:
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual void multimethod(plant *other, std::ofstream &ofst);
	virtual void mmTree(std::ofstream &ofst);
	virtual void mmBush(std::ofstream &ofst);
	virtual void mmFlower(std::ofstream &ofst);
};


#endif // FLOWER_H
