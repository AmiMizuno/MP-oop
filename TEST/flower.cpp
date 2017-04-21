#include "flower.h"



void flower::inData(std::ifstream &ifst)
{
	plant::inData(ifst);
	std::string growing_in;
	ifst >> growing_in;
	if (growing_in == "Home")
		growing = HOME;
	else if (growing_in == "Garden")
		growing = GARDEN;
	else if (growing_in == "Wild")
		growing = WILD;
}

void flower::outData(std::ofstream &ofst)
{
	std::string growing_out;
	switch (growing)
	{
		case HOME : growing_out = "at home"; break;
		case GARDEN : growing_out = "in garden"; break;
		case WILD : growing_out = "in the wild"; break;
		default : break;
	}
	ofst << "This is a flower: grows " << growing_out << ". ";
	plant::outData(ofst);
}


