#ifndef BUSH_H
#define BUSH_H

#include "plant.h"
#include <fstream>

namespace flora
{

struct bush : public plant
{
	enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
	month flowering;
public:
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
};


}

#endif // BUSH_H
