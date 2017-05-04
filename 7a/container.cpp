#include "container.h"
#include "plant.h"
#include <iostream>



void container::clear()
{
	while (head != NULL)
	{
		container::element* tmp = head->next;
		delete head->p;
		delete head;
		head = tmp;
	}
	head = NULL;
	tail = NULL;
	len = 0;
}


void container::in(std::ifstream &ifst)
{
	while (!ifst.eof())
	{
		plant* p = plant::in(ifst);
		if (p == NULL)
			break;
		container::element* elem = new container::element;
		elem->p = p;
		if (head == NULL)
			head = tail = elem;
		else
		{
			tail->next = elem;
			tail = tail->next;
		}
		len++;
	}
}

void container::out(std::ofstream &ofst)
{
	ofst << "Container contains " << len << " elements." << std::endl;
	container::element* current = head;
	while (current != NULL)
	{
		(current->p)->outData(ofst);
		current = current->next;
	}
}

void container::multimethod(std::ofstream &ofst)
{
	ofst << "Multimethod" << std::endl;
	container::element* i = head;
	while (i != NULL)
	{
		container::element* j = i->next;
		while (j != NULL)
		{
			(i->p)->multimethod(j->p, ofst);
			(i->p)->outData(ofst);
			(j->p)->outData(ofst);
			j = j->next;
		}
		i = i->next;
	}
}

container::container() : head(NULL), tail(NULL), len(0)
{
}

container::~container()
{
	clear();
}


