#include <iostream>
using namespace std;

#include "MyIntStack.h"

int main()
{
	MyIntStack a;
	for (int i = 0; i < 11; i++)
	{
		if (a.push(i)) cout << i << ' ';
		else cout << endl << i + 1 << " 번째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++)
	{
		if (a.pop(n)) cout << n << ' ';
		else cout << endl << i + 1 << " 번째 stack empty";
	}
	cout << endl;
	return 0;
}