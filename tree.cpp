#include "tree.h"



void tree::inData(std::ifstream &ifst)
{
	plant::inData(ifst);
	ifst >> age;
}

void tree::outData(std::ofstream &ofst)
{
	ofst << "This is a tree: age = " << age << " years. ";
	plant::outData(ofst);
}

void tree::outTree(std::ofstream &ofst)
{
	outData(ofst);
}

void tree::multimethod(plant *other, std::ofstream &ofst)
{
	other->mmTree(ofst);
}
//Тип первого аргумента определяется автоматически
//вызывается один из обработчиков специализации второго аргумента
void tree::mmTree(std::ofstream &ofst)
{
	ofst << "Tree and Tree" << std::endl;
}
//функции-диспетчеры, осуществляющие переход к анализу второго аргумента
void tree::mmBush(std::ofstream &ofst)
{
	ofst << "Bush and Tree" << std::endl;
}

void tree::mmFlower(std::ofstream &ofst)
{
	ofst << "Flower and Tree" << std::endl;
}


