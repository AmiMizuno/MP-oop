#ifndef BUSH_H
#define BUSH_H

#include "plant.h"
#include <fstream>


struct bush : public plant
{
	enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
	month flowering;
public:
	void InData(std::ifstream &ifst);
	void OutData(std::ofstream &ofst);
	virtual void Multimethod(plant *other, std::ofstream &ofst);
	virtual void MmTree(std::ofstream &ofst);
	virtual void MmBush(std::ofstream &ofst);
	virtual void MmFlower(std::ofstream &ofst);
};



#endif // BUSH_H
