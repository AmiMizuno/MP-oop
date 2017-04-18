#include "bush.h"
#include <string>

void Bush::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	std::string month;
	ifst >> month;
	if (month == "January")
        flowering = Bush::JANUARY;
	else if (month == "February")
        flowering = Bush::FEBRUARY;
	else if (month == "March")
        flowering = Bush::MARCH;
	else if (month == "April")
        flowering = Bush::APRIL;
	else if (month == "May")
        flowering = Bush::MAY;
	else if (month == "June")
        flowering = Bush::JUNE;
	else if (month == "July")
        flowering = Bush::JULY;
	else if (month == "August")
        flowering = Bush::AUGUST;
	else if (month == "September")
        flowering = Bush::SEPTEMBER;
	else if (month == "October")
        flowering = Bush::OCTOBER;
	else if (month == "November")
        flowering = Bush::NOVEMBER;
	else if (month == "December")
        flowering = Bush::DECEMBER;
}

void Bush::out_data(std::ofstream &ofst)
{
	std::string month;
	switch (flowering){
        case Bush::JANUARY : month = "January"; break;
        case Bush::FEBRUARY : month = "February"; break;
        case Bush::MARCH : month = "March"; break;
        case Bush::APRIL : month = "April"; break;
        case Bush::MAY : month = "May"; break;
        case Bush::JUNE : month = "June"; break;
        case Bush::JULY : month = "July"; break;
        case Bush::AUGUST : month = "August"; break;
        case Bush::SEPTEMBER : month = "September"; break;
        case Bush::OCTOBER : month = "October"; break;
        case Bush::NOVEMBER : month = "November"; break;
        case Bush::DECEMBER : month = "December"; break;
		default : break;
	}
    ofst << "This is a bush: flowering month = " << month << ". ";
    Plant::out_data(ofst);
}


