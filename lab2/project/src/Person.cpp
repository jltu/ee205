#include "Person.hpp"
//Default Constructor
Person::Person(){
	name = "";
	location.set_x(0);
	location.set_y(0);
}

//Overload Constructor
Person::Person(std::string n, float x, float y){
	name = n;
	location.set_x(x);
	location.set_y(y);
}

//Setters
void Person::set_name(std::string n){
	name = n;
} 
void Person::set_location(Point2D l){
	location.set_x(l.get_x());
	location.set_y(l.get_y());
}

//Getters
std::string Person::get_name(void){
	return name;
}
Point2D Person::get_location(void){
 	return location;       
};

