#include "flower.h"



void flower::InData(std::ifstream &ifst)
{
	plant::InData(ifst);
	std::string growing_in;
	ifst >> growing_in;
	if (growing_in == "Home")
		growing = flower::HOME;
	else if (growing_in == "Garden")
		growing = flower::GARDEN;
	else if (growing_in == "Wild")
		growing = flower::WILD;
}

void flower::OutData(std::ofstream &ofst)
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
	plant::OutData(ofst);
}

void flower::Multimethod(plant *other, std::ofstream &ofst)
{
	other->MmFlower(ofst);
}

void flower::MmTree(std::ofstream &ofst)
{
	ofst << "Tree and Flower" << std::endl;
}

void flower::MmBush(std::ofstream &ofst)
{
	ofst << "Bush and Flower" << std::endl;
}

void flower::MmFlower(std::ofstream &ofst)
{
	ofst << "Flower and Flower" << std::endl;
}

