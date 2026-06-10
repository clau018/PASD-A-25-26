#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
	int c;
	char *namanya, CL[7] = {'R','A','R','A','S','O','R'};
	cout << "Namaku" << endl;
	cout << "------" << endl;
	for (c=0; c<7; c++)
	{
		namanya = &CL[c];
		cout << "  " << *namanya << endl;
	}
	cin.get();
}