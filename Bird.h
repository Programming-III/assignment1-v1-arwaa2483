#ifndef Bird_H_INCLUDED
#define Bird_H_INCLUDED;
#include<string>
#include "Animal.h"

class Bird :public Animal{
private:
	float wingSpan;
public:
	Bird(string name, int age, bool isHungry, float wingSpan);
	Bird();
	~Bird();

	float getWingSpan();
	void setWingSpan(float wingspan);

};
#endif
