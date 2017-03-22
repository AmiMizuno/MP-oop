#include "container.h"
#include "plant.h"
#include <iostream>

namespace flora
{

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

<<<<<<< HEAD
void container::sort()
{
	container::element* a = head;
	container::element* prevA = NULL;
	while (a != NULL)
	{
		container::element* b = a->next;
		container::element* prevB = a;
		while (b != NULL)
		{
			if ((a->p)->compare(*(b->p)))
			{
				container::element *tmp = a;
				container::element *tmp_next = a->next;
				if (!prevA)
					head = b;
				else
					prevA->next = b;
				prevB->next = a;
				a->next = b->next;
				if (tmp_next != b)
					b->next = tmp_next;
				else
					b->next = a;
				a = b;
				b = tmp;
			}
			tail = b;
			prevB = b;
			b = b->next;
		}
		prevA = a;
		a = a->next;
	}
}


=======
>>>>>>> filter-out
void container::in(std::ifstream &ifst)
{
	while (!ifst.eof())
	{
		plant* p = plant::in(ifst);
		if (p == NULL)
			break;
		container::element* elem = new container::element;
		elem->p = p;
		elem->next = NULL;
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
<<<<<<< HEAD
=======
void container::outTrees(std::ofstream &ofst)
{
	ofst << "Container contains " << len << " elements." << std::endl;
	ofst << "Output only trees." << std::endl;
	container::element* current = head;
	while (current != NULL)
	{
		(current->p)->outTree(ofst);
		current = current->next;
	}
}
>>>>>>> filter-out

container::container() : head(NULL), tail(NULL), len(0)
{
}

container::~container()
{
	clear();
}

}
