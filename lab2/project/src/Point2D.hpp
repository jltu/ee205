#include <iostream>
using namespace std;

// These two lines are the opening part of what's called a "header guard"
// If this file is ever included more than one, it'll make sure that
// only one version of this code will show up to the compiler.
//
// In other words, it won't try to redefine things twice because it
// was included twice.
#ifndef POINT2D_HPP
#define POINT2D_HPP

// You'll need to turn this into a class.
// Make sure you use the concept of encapsulation,
// and hide the class's internal data.

//Class definition for point2D
class Point2D{
    public:
        //Default Constructor
        Point2D();  

        //Overloaded Constructor
        Point2D(float p1,float p2); 

        //Setters
        void set_x(float p1); 
        void set_y(float p2); 

        //Getters
        float get_x();
        float get_y();

        //Operator Overloading
        // lhs = "left hand side"
        // rhs = "right hand side"
        Point2D operator+(const Point2D &rhs);
        Point2D operator-(const Point2D &rhs);
        Point2D operator*(const Point2D &rhs);
        Point2D operator/(const Point2D &rhs); 
    
    private:
        float x;
        float y;
    
};


#endif // POINT2D_HPP

