#ifndef CONTAINER_H
#define CONTAINER_H

#include <fstream>
#include "plant.h"



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
	void Clear();
	void Sort();
	void In(std::ifstream &ifst);
	void Out(std::ofstream &ofst);
	void OutTrees(std::ofstream &ofst);
	void Multimethod(std::ofstream &ofst);

	container();
	~container();


};


#endif // CONTAINER_H
