#ifndef ADD_H
#define ADD_H

class Add
{
private:
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a + b; }
};

#endif