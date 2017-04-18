#include "flower.h"

void Flower::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	std::string growing_in;
	ifst >> growing_in;
	if (growing_in == "Home")
        growing = Flower::HOME;
	else if (growing_in == "Garden")
        growing = Flower::GARDEN;
	else if (growing_in == "Wild")
        growing = Flower::WILD;
}

void Flower::out_data(std::ofstream &ofst)
{
	std::string growing_out;
	switch (growing){
        case Flower::HOME : growing_out = "at home"; break;
        case Flower::GARDEN : growing_out = "in garden"; break;
        case Flower::WILD : growing_out = "in the wild"; break;
		default : break;
	}
	ofst << "This is a flower: grows " << growing_out << ". ";
    Plant::out_data(ofst);
}


