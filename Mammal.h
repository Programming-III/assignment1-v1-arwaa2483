#ifndef Mammal_H_INCLUDED
#define Mammal_H_INCLUDED;
#include<string>
#include "Animal.h"
using namespace std;

class Mammal:public Animal {
private:
	string furColor;
public:
	Mammal(string name, int age, bool isHungry, string furColor);
	Mammal();
	~Mammal();

	string getFurColor();
	void setFurColor();

};
#endif
