/*
CH-230-A
a10_p6.cpp
Mahiem Agrawal
m.agrawal@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	double hunger;
	int boredom;
	double height;



public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(double newheight);
  

	// getter method
	std::string getname();
	int getHunger();
    int getBoredom();
    double getHeight();
	// service method
	void print();

	//Constructors
	Critter();
	Critter(std::string);
	Critter(std::string,int,int,double=10);

	
	int getihunger();
	double getdhunger(int);
	
};