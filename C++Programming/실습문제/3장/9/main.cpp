#include <iostream>
#include "Oval.h"
using namespace std;

int main()
{
	Oval a,b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
	return 0;
}