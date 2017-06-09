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
	static plant *In(std::ifstream &ifst);
	bool Compare(plant &b);
	int ConsonantCount();
	virtual void InData(std::ifstream &ifst);
	virtual void OutData(std::ofstream &ofst);
	virtual void OutTree(std::ofstream &ofst);
	virtual void Multimethod(plant *other, std::ofstream &ofst) = 0;
	virtual void MmTree(std::ofstream &ofst) = 0;
	virtual void MmBush(std::ofstream &ofst) = 0;
	virtual void MmFlower(std::ofstream &ofst) = 0;
    virtual ~plant() {} // создание без инициализации

};



#endif // PLANT_H
