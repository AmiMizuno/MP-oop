#include "plant.h"
#include "tree.h"
#include "bush.h"
#include <iostream>
#include <cctype>
#include "flower.h"
#include <iostream>


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
}

void plant::outData(std::ofstream &ofst)
{
	ofst << "Name = " << plant::name << ", consonant count = " << consonant_count() << std::endl;
}

void plant::inData(std::ifstream &ifst)
{
	ifst >> name;
}

void plant::outData(std::ofstream &ofst)
{
	ofst << "Name = " << plant::name << std::endl;
}


}
