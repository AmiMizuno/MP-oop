#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>



class plant
{
protected:
	std::string name;
public:
	static plant *in(std::ifstream &ifst);
	virtual void inData(std::ifstream &ifst) = 0;
	virtual void outData(std::ofstream &ofst) = 0;
	virtual void multimethod(plant *other, std::ofstream &ofst) = 0;
	virtual void mmTree(std::ofstream &ofst) = 0;
	virtual void mmBush(std::ofstream &ofst) = 0;

};



#endif // PLANT_H
