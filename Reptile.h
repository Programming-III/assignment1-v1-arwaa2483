#ifndef Reptile_H_INCLUDED
#define Reptile_H_INCLUDED;
#include<string>
#include "Animal.h"

class Reptile:public Animal {
	private:
	bool isVenomous;
public:
	Reptile(string name , int age, bool isHungry, bool isVenomous);
	Reptile();
	~Reptile();
	
	
};

#endif
