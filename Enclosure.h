#ifndef Enclosure_H_INCLUDED
#define Enclosure_H_INCLUDED;
#include<string>
using namespace std;

class Enclosure {
private:
	Animal* animal;
	int capacity;
	int currentCount;

public:
	
	Enclosure(Animal* animal,int capacity,int currentCount);
	Enclosure();
	~Enclosure();

	void addAnimal(Animal* a);
	void displayAnimals();
	
	int getCapacity();
	int getCurrentCount;
	void setCapacity(int capacity);
	void etCurrentCount(int capacity);


};
#endif;
