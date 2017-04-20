#include <iostream>
#include <fstream>
#include <cstdlib>
#include "container.h"
using namespace std;

int main(int argc, char* argv[])
{
    if(argc != 3) {
		cout << "incorrect command line! "
		"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
    if(!ifst) {
        cout << "No input file found!" << endl;
        return 0;
    }
	cout << "Start" << endl;
    Container c;
	c.in(ifst);
    if (ifst.fail()) {
            cout << "Wrong input!" << endl;
            return 0;
        }
    ofstream ofst(argv[2]);
	ofst << "Filled container. " << endl;
    c.out(ofst);
    ofst << "Sorted container. " << endl;
	c.sort();
	c.out(ofst);
	ofst << endl;
    c.out_trees(ofst);
	c.clear();
	ofst << "Empty container. " << endl;
	c.out(ofst);
	cout << "Stop" << endl;
	return 0;
}
