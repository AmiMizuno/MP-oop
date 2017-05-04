#ifndef BUSH_H
#define BUSH_H

#include "plant.h"
#include <fstream>


struct bush : public plant
{
	enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
	month flowering;
public:
	void inData(std::ifstream &ifst);
	void outData(std::ofstream &ofst);
	virtual void multimethod(plant *other, std::ofstream &ofst);
	virtual void mmTree(std::ofstream &ofst);
	virtual void mmBush(std::ofstream &ofst);
};




#endif // BUSH_H
