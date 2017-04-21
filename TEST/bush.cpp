#include "bush.h"
#include <string>



void bush::inData(std::ifstream &ifst)
{
	plant::inData(ifst);
	std::string month;
	ifst >> month;
	if (month == "January")
		flowering = JANUARY;
	else if (month == "February")
		flowering = FEBRUARY;
	else if (month == "March")
		flowering = MARCH;
	else if (month == "April")
		flowering = APRIL;
	else if (month == "May")
		flowering = MAY;
	else if (month == "June")
		flowering = JUNE;
	else if (month == "July")
		flowering = JULY;
	else if (month == "August")
		flowering = AUGUST;
	else if (month == "September")
		flowering = SEPTEMBER;
	else if (month == "October")
		flowering = OCTOBER;
	else if (month == "November")
		flowering = NOVEMBER;
	else if (month == "December")
		flowering = DECEMBER;
}

void bush::outData(std::ofstream &ofst)
{
	std::string month;
	switch (flowering)
	{
		case JANUARY : month = "January"; break;
		case FEBRUARY : month = "February"; break;
		case MARCH : month = "March"; break;
		case APRIL : month = "April"; break;
		case MAY : month = "May"; break;
		case JUNE : month = "June"; break;
		case JULY : month = "July"; break;
		case AUGUST : month = "August"; break;
		case SEPTEMBER : month = "September"; break;
		case OCTOBER : month = "October"; break;
		case NOVEMBER : month = "November"; break;
		case DECEMBER : month = "December"; break;
		default : break;
	}
	ofst << "This is a bush: flowering month = " << month << ". ";
	plant::outData(ofst);
}


