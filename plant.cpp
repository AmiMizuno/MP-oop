#include "plant.h"
#include "tree.h"
#include "bush.h"
#include <iostream>
#include <cctype>

namespace flora
{

plant* plant::in(std::ifstream &ifst)
{
	plant *p;
	int k;
	ifst >> k;
	switch (k)
	{
		case 1:
			p = new tree;
			break;
		case 2:
			p = new bush;
			break;
		default:
			return 0;
	}
	p->inData(ifst);
	return p;
}



void plant::inData(std::ifstream &ifst)
{
	ifst >> name;
	std::string habitat_in;
	ifst >> habitat_in;

	if (habitat_in == "Tundra")
		habitat = plant::TUNDRA;
	else if (habitat_in == "Desert")
		habitat = plant::DESERT;
	else if (habitat_in == "Steppe")
		habitat = plant::STEPPE;
	else if (habitat_in == "Forest")
		habitat = plant::FOREST;
}

void plant::outData(std::ofstream &ofst)
{
	std::string habitat_out = "";
	switch (habitat)
	{
		case plant::TUNDRA:
			habitat_out = "Tundra";
			break;
		case plant::DESERT:
			habitat_out = "Desert";
			break;
		case plant::STEPPE:
			habitat_out = "Steppe";
			break;
		case plant::FOREST:
			habitat_out = "Forest";
			break;
		default:
			ofst << "Incorrect habitat!" << std::endl;
			return;
	}
	ofst << "Name = " << plant::name << ", habitat = " << habitat_out << std::endl;
}


}
