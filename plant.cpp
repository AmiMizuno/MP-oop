#include "Plant.h"
#include "tree.h"
#include "bush.h"
#include "flower.h"
#include <iostream>
#include <cctype>
using namespace std;
Plant* Plant::in(std::ifstream &ifst) {
    Plant *p;
	int k;
	k = check_number(ifst, k);
    switch (k) {
		case 1:
            p = new Tree;
			break;
		case 2:
            p = new Bush;
			break;
		case 3:
            p = new Flower;
			break;
		default:
			return 0;
	}
    p->in_data(ifst);
	return p;
}

bool Plant::compare(Plant &b)
{
	return consonant_count() < b.consonant_count();
}

int Plant::consonant_count()
{
	int consonsnts = 0;
    for (int i = 0, length = name.size(); i < length; i++) {
		char c = name[i];
		if (!isalpha(c))
			continue;
		c = tolower(c);
		if (c == 'a' || c == 'i' || c == 'u' || c == 'o' || c == 'e')
			continue;
		consonsnts++;
	}
	return consonsnts;
}

void Plant::in_data(std::ifstream &ifst)
{
	ifst >> name;
	std::string habitat_in;
	habitat_in = check_data(ifst, habitat_in);

	if (habitat_in == "Tundra")
		habitat = TUNDRA;
	else if (habitat_in == "Desert")
		habitat = DESERT;
	else if (habitat_in == "Steppe")
		habitat = STEPPE;
	else if (habitat_in == "Forest")
		habitat = FOREST;
	else
	{
		cout << "Wrong habitat (Plant)!" << endl;
		exit(1);
	}
}

void Plant::out_data(std::ofstream &ofst)
{
	std::string habitat_out = "";
    switch (habitat) {
		case TUNDRA:
			habitat_out = "Tundra";
			break;
		case DESERT:
			habitat_out = "Desert";
			break;
		case STEPPE:
			habitat_out = "Steppe";
			break;
		case FOREST:
			habitat_out = "Forest";
			break;
		default:
			ofst << "Incorrect habitat!" << std::endl;
			return;
	}
    ofst << "Name = " << Plant::name << ", habitat = " << habitat_out <<
			", consonant count = " << consonant_count() << std::endl;
}

void Plant::out_tree(std::ofstream &ofst)
{

}
std::string Plant::check_data(std::ifstream &ifst, std::string data)
{
	ifst >> data;
	if (ifst.fail())
	{
		cout << "Error while reading file!" << endl;
		exit(1);
	}
	return data;
}
int Plant::check_number(std::ifstream &ifst, int data)
{
	ifst >> data;
	if (ifst.fail())
	{
		cout << "Error while reading file!" << endl;
		exit(1);
	}
	if ((data < 1)||(data > 3))
	{
		cout << "Incorrect key!" << endl;
		exit(1);
	}
	return data;
}


