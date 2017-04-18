#ifndef PLANT_H
#define PLANT_H
#include <string>
#include <fstream>

class Plant
{
protected:
	enum zone { TUNDRA, DESERT, STEPPE, FOREST };
    Plant() {}
private:
	std::string name;
	zone habitat;
public:
    static Plant *in(std::ifstream &ifst);
    bool compare(Plant &b);
	int consonant_count();
    virtual void in_data(std::ifstream &ifst);
    virtual void out_data(std::ofstream &ofst);
    virtual void out_tree(std::ofstream &ofst);
    virtual ~Plant() {}
};

#endif // PLANT_H
