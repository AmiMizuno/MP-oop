#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>



class plant
{
protected:
	enum zone { TUNDRA, DESERT, STEPPE, FOREST };
	plant() {}
private:
	std::string name;
	zone habitat;
public:
	static plant *in(std::ifstream &ifst);
	bool compare(plant &b);
	int consonant_count();
	virtual void inData(std::ifstream &ifst);
	virtual void outData(std::ofstream &ofst);
	virtual void outTree(std::ofstream &ofst);
	virtual void multimethod(plant *other, std::ofstream &ofst) = 0;
	virtual void mmTree(std::ofstream &ofst) = 0;
	virtual void mmBush(std::ofstream &ofst) = 0;
	virtual void mmFlower(std::ofstream &ofst) = 0;
    virtual ~plant() {} // создание без инициализации

};



#endif // PLANT_H
