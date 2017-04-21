#ifndef FLOWER_H
#define FLOWER_H
#include "plant.h"
#include <fstream>
#include <iostream>
using namespace std;
enum area { HOME, GARDEN, WILD };
class Flower : public Plant
{
	area growing;
public:
    virtual void in_data(std::ifstream &ifst);
	std::string check_data(std::ifstream &ifst, std::string data);
    virtual void out_data(std::ofstream &ofst);
};

#endif // FLOWER_H
