#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>

namespace flora
{

class plant
{
protected:
	plant() {}
private:
	std::string name;
public:
	static plant *in(std::ifstream &ifst);

	bool compare(plant &b);
	int consonant_count();

	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual ~plant() {}

};

}

#endif // PLANT_H
