#include "bush.h"
#include <string>



void bush::InData(std::ifstream &ifst)
{
	plant::InData(ifst);
	std::string month;
	ifst >> month;
	if (month == "January")
		flowering = bush::JANUARY;
	else if (month == "February")
		flowering = bush::FEBRUARY;
	else if (month == "March")
		flowering = bush::MARCH;
	else if (month == "April")
		flowering = bush::APRIL;
	else if (month == "May")
		flowering = bush::MAY;
	else if (month == "June")
		flowering = bush::JUNE;
	else if (month == "July")
		flowering = bush::JULY;
	else if (month == "August")
		flowering = bush::AUGUST;
	else if (month == "September")
		flowering = bush::SEPTEMBER;
	else if (month == "October")
		flowering = bush::OCTOBER;
	else if (month == "November")
		flowering = bush::NOVEMBER;
	else if (month == "December")
		flowering = bush::DECEMBER;
}

void bush::OutData(std::ofstream &ofst)
{
	std::string month;
	switch (flowering)
	{
		case bush::JANUARY : month = "January"; break;
		case bush::FEBRUARY : month = "February"; break;
		case bush::MARCH : month = "March"; break;
		case bush::APRIL : month = "April"; break;
		case bush::MAY : month = "May"; break;
		case bush::JUNE : month = "June"; break;
		case bush::JULY : month = "July"; break;
		case bush::AUGUST : month = "August"; break;
		case bush::SEPTEMBER : month = "September"; break;
		case bush::OCTOBER : month = "October"; break;
		case bush::NOVEMBER : month = "November"; break;
		case bush::DECEMBER : month = "December"; break;
		default : break;
	}
	ofst << "This is a bush: flowering month = " << month << ". ";
	plant::OutData(ofst);
}

void bush::Multimethod(plant *other, std::ofstream &ofst)
{
	other->MmBush(ofst);
}

void bush::MmTree(std::ofstream &ofst)
{
	ofst << "Tree and Bush" << std::endl;
}

void bush::MmBush(std::ofstream &ofst)
{
	ofst << "Bush and Bush" << std::endl;
}

void bush::MmFlower(std::ofstream &ofst)
{
	ofst << "Flower and Bush" << std::endl;
}


