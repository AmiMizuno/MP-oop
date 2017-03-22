#include "plant.h"
#include "tree.h"
#include "bush.h"

namespace flora
{
// ¬вод параметров обобщенной фигуры 
// из стандартного потока ввода
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
	std::string name;
	ifst >> name;
	p->name = name;
	p->inData(ifst);
	return p;
}


}
