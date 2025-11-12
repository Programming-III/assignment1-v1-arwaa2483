#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal() {
    name = "";
    age = 0;
    isHungry = false;
}
Animal::Animal(string name, int age, bool isHungry) {
    this->name = name;
    this->age = age;
    this->isHungry = isHungry;
}

void  Animal::display() {
    cout << name << "( " << "age: " << age;
    if (isHungry)
        cout << "Hungry" << ")" << endl;
    else
        cout << "Not Hungry" << ")" << endl;
}
void Animal:: feed() {
    if (isHungry)
        cout << "Hungry" << endl;
    else
        cout << "Not Hungry" << endl;
}
Animal::~Animal() {}
string Animal::getName() { return name; }
int Animal::getAge() { return age; }
bool  Animal::getHungry() 
{ return isHungry;
}

Mammal::Mammal() :Animal() {
    furColor = "";
}
Mammal::Mammal(string name, int age,
    bool isHungry, string furColor) :Animal(name, age,
        isHungry) {
    this->furColor = furColor;


}

Mammal::~Mammal() {}

Bird::Bird() :Animal() { wingSpan = 0; }
Bird::Bird(string name, int age,
    bool isHungry, float wingSpan) :Animal(name, age, isHungry
    ) {
    this->wingSpan = wingSpan;
}

Bird::~Bird() {}
Reptile::Reptile() :Animal() { isVenomous = false; }
Reptile::Reptile(string name, int age, bool isHungry
    , bool isVenomous) :Animal(name, age, isHungry) {
    this->isVenomous = isVenomous;
}
Reptile::~Reptile() {}

Enclosure::Enclosure() { capacity = 0; currentCount = 0; animal = NULL; }
Enclosure( int capacity,int currentCount) {
    this->capacity = capacity;
    this->currentCount = currentCount;
    animal = new Animal[capacity];
}
void Enclosure::addAnimal(Animal* a) {
    if (capacity < currentCount) {
        animal[currentCount] = a;
        currentCount++;
    }
    else {
        cout << "no space" << endl;
    }

}
void Enclosure::displayAnimals() {
    for (int i = 0;i > currentCount;i++)
        animal[i].display();
}
Enclosure::~Enclosure() {
    delete animal[];
}

Visitor::Visitor(string visitorName, int ticketBought) {
    this->visitorName = visitorName;
    this- ticketBought = ticketBought;
}
Visitor::Visitor{

}
Visitor::~Visitor{

}
string  Visitor::getvisitorName() {
    return visitorName
}
void Visitor::setvisitorName(string visitorName) {
    visitorName = visitorName;
}
int Visitor::get ticketBought() {
    return  ticketBought;
}
void Visitor::setticketBought(int ticketBought) {
    ticketBought = int ticketBought;
}


   

}




 int main() {
    visitor v1("Sarah Ali", 3)
        v1.display();
    Animal a1("lion", 5, Hungry);
    Animal a2("parrot", 2, not Hungry)
        Animal a3("snake", 3, venemous, hungry)
        a1.display();
    a2.display();
    a3.diplay();

    
    
    return 0;
 }
}
