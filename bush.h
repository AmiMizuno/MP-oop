#ifndef BUSH_H
#define BUSH_H
#include "plant.h"
#include <fstream>
#include <iostream>
using namespace std;
enum month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };
class Bush : public Plant
{
	month flowering;
public:
    void in_data(std::ifstream &ifst);
    void out_data(std::ofstream &ofst);
	std::string check_data(std::ifstream &ifst, std::string data);
};

#endif // BUSH_H
