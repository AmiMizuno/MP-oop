#ifndef CONTAINER_H
#define CONTAINER_H
#include <fstream>
#include "Plant.h"

class Container
{
	struct element
	{
        Plant* p;
		element* next;
	};
	element* head, * tail;
	int len;
public:
	void clear();
	void sort();
	void in(std::ifstream &ifst);
	void out(std::ofstream &ofst);
    void out_trees(std::ofstream &ofst);
    Container();
    ~Container();
};

#endif // CONTAINER_H
