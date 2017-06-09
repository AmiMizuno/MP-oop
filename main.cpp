#include <iostream>
#include <fstream>
#include <cstdlib>
#include "container.h"

using namespace std;

int Main(int argc, char* argv[])
{
	if(argc != 3)	{
		cout << "incorrect command line! "
		"Waited: command infile outfile" << endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
    if(!ifst)
    {
        cout << "No input file found!" << endl;
        return 0;

    }


	cout << "Start" << endl;
	container c;
	c.In(ifst);
    ofstream ofst(argv[2]);
	ofst << "Filled container. " << endl;
	c.Sort();
	c.Multimethod(ofst);
	ofst << endl;
	c.OutTrees(ofst);
	c.Clear();
	ofst << "Empty container. " << endl;
	c.Out(ofst);
	ifst.close();
	ofst.close();
	cout << "Stop" << endl;
	return 0;
}
