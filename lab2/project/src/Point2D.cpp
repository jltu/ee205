#include "Point2D.hpp"

//Function definition for class Point2D

//Default Constructor
Point2D::Point2D(){
	x = 0;
	y = 0;
}

//Overloaded Constructor
Point2D::Point2D(float p1, float p2){
	x = p1;
	y = p2;
}

//Getters
float Point2D::get_x(){
	return x;
}
float Point2D::get_y(){
	return y;
}

//Setters
void Point2D::set_x(float p1){
	x = p1;
}

void Point2D::set_y(float p2){
	y = p2;
}

//Operator Overloading for "+"
Point2D Point2D:: operator+(const Point2D &rhs){
	Point2D temp_Point2D;
	temp_Point2D.x = x + rhs.x;
	temp_Point2D.y = y + rhs.y;
	return temp_Point2D;
}
//Operator Overloading for "-"
Point2D Point2D:: operator-(const Point2D &rhs){
	Point2D temp_Point2D;
	temp_Point2D.x = x - rhs.x;
	temp_Point2D.y = y - rhs.y;
	return temp_Point2D;
}
//Operator Overloading for "*"
Point2D Point2D:: operator*(const Point2D &rhs){
	Point2D temp_Point2D;
	temp_Point2D.x = x * rhs.x;
	temp_Point2D.y = y * rhs.y;
	return temp_Point2D;
}
//Operator Overloading for "/"
Point2D Point2D:: operator/(const Point2D &rhs){
	Point2D temp_Point2D;
	temp_Point2D.x = x / rhs.x;
	temp_Point2D.y = y / rhs.y;
	return temp_Point2D;
}
