#ifndef FLOWER_H
#define FLOWER_H

#include "plant.h"
#include <fstream>


enum area { HOME, GARDEN, WILD };
class flower : public plant
{
	area growing;
public:
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
};


#endif // FLOWER_H
