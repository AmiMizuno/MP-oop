#ifndef CONTAINER_H
#define CONTAINER_H

#include <fstream>
#include "plant.h"

namespace flora
{

struct container
{

	struct element
	{
		plant* p;
		element* next;
	};
	element* head, * tail;
	int len;

	void clear();
	void in(std::ifstream &ifst);
	void out(std::ofstream &ofst);

	container();
	~container();


};

}

#endif // CONTAINER_H
