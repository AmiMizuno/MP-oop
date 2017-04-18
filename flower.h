#ifndef FLOWER_H
#define FLOWER_H
#include "plant.h"
#include <fstream>

class Flower : public Plant
{
	enum area { HOME, GARDEN, WILD };
	area growing;
public:
    virtual void in_data(std::ifstream &ifst);
    virtual void out_data(std::ofstream &ofst);
};

#endif // FLOWER_H
