#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
	string name;
	string tel;
public:
	Person() {}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) { this->name = name; this->tel = tel; }
};

#endif