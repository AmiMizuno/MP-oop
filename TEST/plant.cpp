#include "plant.h"
#include "tree.h"
#include "bush.h"
#include "flower.h"
#include <iostream>
#include <cctype>


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
		case 3:
			p = new flower;
			break;
		default:
			return 0;
	}
	p->inData(ifst);
	return p;
}

bool plant::compare(plant &b)
{
	return consonant_count() < b.consonant_count();
}

int plant::consonant_count()
{
	int consonsnts = 0;
	for (int i = 0, length = name.size(); i < length; i++)
	{
		char c = name[i];
		if (!isalpha(c))
			continue;
		c = tolower(c);
		if (c == 'a' || c == 'i' || c == 'u' || c == 'o' || c == 'e')
			continue;
		consonsnts++;
	}
	return consonsnts;
}

void plant::inData(std::ifstream &ifst)
{
	ifst >> name;
	std::string habitat_in;
	ifst >> habitat_in;

	if (habitat_in == "Tundra")
		habitat = TUNDRA;
	else if (habitat_in == "Desert")
		habitat = DESERT;
	else if (habitat_in == "Steppe")
		habitat = STEPPE;
	else if (habitat_in == "Forest")
		habitat = FOREST;
}

void plant::outData(std::ofstream &ofst)
{
	std::string habitat_out = "";
	switch (habitat)
	{
		case TUNDRA:
			habitat_out = "Tundra";
			break;
		case DESERT:
			habitat_out = "Desert";
			break;
		case STEPPE:
			habitat_out = "Steppe";
			break;
		case FOREST:
			habitat_out = "Forest";
			break;
		default:
			ofst << "Incorrect habitat!" << std::endl;
			return;
	}
	ofst << "Name = " << plant::name << ", habitat = " << habitat_out <<
			", consonant count = " << consonant_count() << std::endl;
}

void plant::outTree(std::ofstream &ofst)
{
}



