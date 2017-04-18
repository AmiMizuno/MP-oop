#include "Plant.h"
#include "tree.h"
#include "bush.h"
#include "flower.h"
#include <iostream>
#include <cctype>

Plant* Plant::in(std::ifstream &ifst) {
    Plant *p;
	int k;
	ifst >> k;
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
	ifst >> habitat_in;

	if (habitat_in == "Tundra")
        habitat = Plant::TUNDRA;
	else if (habitat_in == "Desert")
        habitat = Plant::DESERT;
	else if (habitat_in == "Steppe")
        habitat = Plant::STEPPE;
	else if (habitat_in == "Forest")
        habitat = Plant::FOREST;
}

void Plant::out_data(std::ofstream &ofst)
{
	std::string habitat_out = "";
    switch (habitat) {
        case Plant::TUNDRA:
			habitat_out = "Tundra";
			break;
        case Plant::DESERT:
			habitat_out = "Desert";
			break;
        case Plant::STEPPE:
			habitat_out = "Steppe";
			break;
        case Plant::FOREST:
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



