#ifndef BUSH_H
#define BUSH_H
#include "plant.h"
#include <fstream>

struct Bush : public Plant
{
	enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
	month flowering;
public:
    void in_data(std::ifstream &ifst);
    void out_data(std::ofstream &ofst);
};

#endif // BUSH_H
