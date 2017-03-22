#ifndef PLANT_H
#define PLANT_H

#include <string>
#include <fstream>

namespace flora
{
// �������������, ���������� � ���� ������ �� ������
class plant
{
protected:
	std::string name;
public:
	static plant *in(std::ifstream &ifst);
	virtual void inData(std::ifstream &ifst) = 0;// ����
	virtual void outData(std::ofstream &ofst) = 0;// �����

};

}

#endif // PLANT_H
