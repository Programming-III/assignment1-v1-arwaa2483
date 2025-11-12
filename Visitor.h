#ifndef Visitor_H_INCLUDED
#define Visitor_H_INCLUDED;
#include<string>
using namespace std;

class Visitor {
private:
	string visitorName;
	int ticketBought;
public:
	void displayInfo();
	Visitor(string visitorName, int ticketBought);
	Visitor();
	~Visitor();

	string getVisitorName();
	void setVisitorName();


};
#endif;
