#include <iostream>
#include <fstream>
#include <cstdlib>
#include "container.h"

using namespace std;


int main(int argc, char* argv[])
{
	if(argc != 3)	{
		cout << "incorrect command line! "
		"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	container c;
	c.in(ifst);
	ofst << "Filled container. " << endl;
	c.multimethod(ofst);
	c.clear();
	ofst << "Empty container. " << endl;
	c.out(ofst);
	cout << "Stop" << endl;
	return 0;
}
