#ifndef CONTAINER_H
#define CONTAINER_H

#include <fstream>
#include "plant.h"

namespace flora
{

class container
{

	struct element
	{
		plant* p;
		element* next;
	};
	element* head, * tail;
	int len;

public:
	void clear();
	void in(std::ifstream &ifst);
	void out(std::ofstream &ofst);
	void outTrees(std::ofstream &ofst);

	container();
	~container();


};

}

#endif // CONTAINER_H
