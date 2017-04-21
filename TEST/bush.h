#ifndef BUSH_H
#define BUSH_H

#include "plant.h"
#include <fstream>

enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
struct bush : public plant
{
	month flowering;
public:
	void inData(std::ifstream &ifst);
	void outData(std::ofstream &ofst);
};



#endif // BUSH_H
