#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>

namespace flora
{
// иденитфикация, порождение и ввод фигуры из потока
class plant
{
protected:
	std::string name;
public:
	static plant *in(std::ifstream &ifst);
	virtual void inData(std::ifstream &ifst) = 0;// ввод
	virtual void outData(std::ofstream &ofst) = 0;// вывод

};

}

#endif // PLANT_H
