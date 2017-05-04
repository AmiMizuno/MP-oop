#include "flower.h"



void flower::inData(std::ifstream &ifst)
{
	plant::inData(ifst);
	std::string growing_in;
	ifst >> growing_in;
	if (growing_in == "Home")
		growing = flower::HOME;
	else if (growing_in == "Garden")
		growing = flower::GARDEN;
	else if (growing_in == "Wild")
		growing = flower::WILD;
}

void flower::outData(std::ofstream &ofst)
{
	std::string growing_out;
	switch (growing)
	{
		case flower::HOME : growing_out = "at home"; break;
		case flower::GARDEN : growing_out = "in garden"; break;
		case flower::WILD : growing_out = "in the wild"; break;
		default : break;
	}
	ofst << "This is a flower: grows " << growing_out << ". ";
	plant::outData(ofst);
}
//функции-диспетчеры, осуществляющие переход к анализу второго аргумента
void flower::multimethod(plant *other, std::ofstream &ofst)
{
	other->mmFlower(ofst);
}
//Тип первого аргумента определяется автоматически
//вызывается один из обработчиков специализации второго аргумента
void flower::mmTree(std::ofstream &ofst)
{
	ofst << "Tree and Flower" << std::endl;
}

void flower::mmBush(std::ofstream &ofst)
{
	ofst << "Bush and Flower" << std::endl;
}

void flower::mmFlower(std::ofstream &ofst)
{
	ofst << "Flower and Flower" << std::endl;
}

