#include "plant.h"
#include "tree.h"
#include "bush.h"
#include "flower.h"
#include <iostream>
#include <cctype>


plant* plant::In(std::ifstream &ifst)
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
	p->InData(ifst);
	return p;
}

bool plant::Compare(plant &b)
{
	return ConsonantCount() < b.ConsonantCount();
}

int plant::ConsonantCount()
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

void plant::InData(std::ifstream &ifst)
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

void plant::OutData(std::ofstream &ofst)
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
	ofst << "Name = " << plant::name << ", habitat = " << habitat_out <<
			", consonant count = " << ConsonantCount() << std::endl;
}

void plant::OutTree(std::ofstream &ofst)
{
}



