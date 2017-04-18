#include "container.h"
#include "Plant.h"
#include <iostream>

void Container::clear()
{
	while (head != NULL){
        Container::element* tmp = head->next;
		delete head->p;
		delete head;
		head = tmp;
	}
	head = NULL;
	tail = NULL;
	len = 0;
}

void Container::sort()
{
    Container::element* a = head;
    Container::element* prevA = NULL;
	while (a != NULL){
        Container::element* b = a->next;
        Container::element* prevB = a;
		while (b != NULL){
			if ((a->p)->compare(*(b->p))){
                Container::element *tmp = a;
                Container::element *tmp_next = a->next;
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

void Container::in(std::ifstream &ifst)
{
	while (!ifst.eof())
    {
        Plant* p = Plant::in(ifst);
		if (p == NULL)
			break;
        Container::element* elem = new Container::element;
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

void Container::out(std::ofstream &ofst)
{
    ofst << "Container contains " << len << " elements." << std::endl;
    Container::element* current = head;
	while (current != NULL){
        (current->p)->out_data(ofst);
		current = current->next;
	}
}

void Container::out_trees(std::ofstream &ofst)
{
    ofst << "Container contains " << len << " elements." << std::endl;
	ofst << "Output only trees." << std::endl;
    Container::element* current = head;
	while (current != NULL){
        (current->p)->out_tree(ofst);
		current = current->next;
	}
}

Container::Container() : head(NULL), tail(NULL), len(0)
{

}

Container::~Container()
{
	clear();
}
