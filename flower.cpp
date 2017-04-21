#include "flower.h"

void Flower::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	std::string growing_in;
	growing_in = check_data(ifst,growing_in);
	if (growing_in == "Home")
		growing = HOME;
	else if (growing_in == "Garden")
		growing = GARDEN;
	else if (growing_in == "Wild")
		growing = WILD;
	else
	{
		cout << "Wrong place growing! (Flower)!" << endl;
		exit(1);
	}
}

void Flower::out_data(std::ofstream &ofst)
{
	std::string growing_out;
	switch (growing){
		case HOME : growing_out = "at home"; break;
		case GARDEN : growing_out = "in garden"; break;
		case WILD : growing_out = "in the wild"; break;
		default : break;
	}
	ofst << "This is a flower: grows " << growing_out << ". ";
    Plant::out_data(ofst);
}
std::string Flower::check_data(std::ifstream &ifst, std::string data)
{
	ifst >> data;
	if (ifst.fail())
	{
		cout << "Error while reading file!" << endl;
		exit(1);
	}
	return data;
}

