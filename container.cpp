#include "container.h"
#include "plant.h"
#include <iostream>



void container::Clear()
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

void container::Sort()
{
	container::element* a = head;
	container::element* prevA = NULL;
	while (a != NULL)
	{
		container::element* b = a->next;
		container::element* prevB = a;
		while (b != NULL)
		{
			if ((a->p)->Compare(*(b->p)))
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


void container::In(std::ifstream &ifst)
{
	while (!ifst.eof())
    {
		plant* p = plant::In(ifst);
		if (p == NULL)
		{
			break;
		}
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

void container::Out(std::ofstream &ofst)
{
	ofst << "Container contains " << len << " elements." << std::endl;
	container::element* current = head;
	while (current != NULL)
	{
		(current->p)->OutData(ofst);
		current = current->next;
	}
}

void container::OutTrees(std::ofstream &ofst)
{
	ofst << "Container contains " << len << " elements." << std::endl;
	ofst << "Output only trees." << std::endl;
	container::element* current = head;
	while (current != NULL)
	{
		(current->p)->OutTree(ofst);
		current = current->next;
	}
}

void container::Multimethod(std::ofstream &ofst)
{
	ofst << "Multimethod" << std::endl;
	container::element* i = head;
	while (i != NULL)
	{
		container::element* j = i->next;
		while (j != NULL)
		{
			(i->p)->Multimethod(j->p, ofst);
			(i->p)->OutData(ofst);
			(j->p)->OutData(ofst);
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


