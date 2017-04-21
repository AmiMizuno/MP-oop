#ifndef CONTAINER_H
#define CONTAINER_H

#include <fstream>
#include "plant.h"



class container
{


public:
	void clear();
	void sort();
	void in(std::ifstream &ifst);
	void out(std::ofstream &ofst);
	void outTrees(std::ofstream &ofst);
    struct element
    {
        plant* p;
        element* next;
    };
    element* head, * tail;
    int len;
	container();
	~container();


};


#endif // CONTAINER_H
