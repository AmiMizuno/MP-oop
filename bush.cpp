#include "bush.h"
#include <string>
void Bush::in_data(std::ifstream &ifst)
{
    Plant::in_data(ifst);
	std::string month;
	month = check_data(ifst,month);
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
	else
	{
		cout << "Wrong month flowering!" << endl;
		exit(1);
	}
}

void Bush::out_data(std::ofstream &ofst)
{
	std::string month;
	switch (flowering){
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
    Plant::out_data(ofst);
}
std::string Bush::check_data(std::ifstream &ifst, std::string data)
{
	ifst >> data;
	if (ifst.fail())
	{
		cout << "Error while reading file!" << endl;
		exit(1);
	}
	return data;
}

