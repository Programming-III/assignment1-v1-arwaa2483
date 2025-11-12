#ifndef Animal_H_INCLUDED
#define Animal_H_INCLUDED;
#include<string>;
using namespace std;

class Animal {
protected:
	string name;
	int age;
	bool isHungry;

public:
	Animal();
	Animal(string name, int age, bool isHungry);
	~Animal();
	void display();
	void feed();
	string getName();
	int getAge();
	bool getisHungry();

	void setisHungry(bool isHungry);
	void setName(string name);
	void setAge(int age);
	
	

};
#endif
