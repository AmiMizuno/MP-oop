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
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual void outTree(std::ofstream &ofst);
	virtual ~plant() {}

};

}

#endif // PLANT_H
