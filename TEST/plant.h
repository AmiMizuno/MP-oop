#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>



class plant
{
protected:
	enum zone { TUNDRA, DESERT, STEPPE, FOREST };
//	plant() {};
public:
	std::string name;
	zone habitat;
public:
	static plant *in(std::ifstream &ifst);
	bool compare(plant &b);
	int consonant_count();
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual void outTree(std::ofstream &ofst);
	virtual ~plant() {}

};



#endif // PLANT_H
