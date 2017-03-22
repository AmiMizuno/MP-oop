#include "container.h"
#include "plant.h"
#include <iostream>

namespace flora
{
//----------------------------------------------------
// Очистка контейнера от элементов 
void container::clear()
{
	while (head != NULL)
	{
		container::element* tmp = head->next;
		delete head->p;
		delete head;
		head = tmp;
	}
	tail = NULL;
	len = 0;
}
//----------------------------------------------------
// Ввод содержимого контейнера
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
//----------------------------------------------------
// Вывод содержимого контейнера

void container::out(std::ofstream &ofst)
{
	ofst << "Container contains " << len << " elements." << std::endl;
	container::element* current = head;
	int i = 0;
	while (current != NULL)
	{
		i++;
		ofst << i << ": ";
		(current->p)->outData(ofst);
		current = current->next;
	}
}
//Инициализация контейнера
//создания конструктором класса
container::container() : head(NULL), tail(NULL), len(0)
{
}

container::~container()
{
	clear();
}

}
