//
// Created by el_me on 26/01/2018.
//

#include "Circle.h"
#include <math.h>

Circle::Circle(){
    this->radius = 0.00;
}
Circle::Circle(std::string color, bool filled, double radius){
    this->radius = radius;
    this->color=color;
    this->filled = filled;
}
double Circle::getRadius (){
    return this->radius;
}
void Circle::setRadius(double radius) {
    this->radius = radius;
}
double Circle::getArea(){
    return 3.1416 * pow(radius, 2);
}
double Circle::getPerimeter(){
    return 3.1416 * (2*radius);

}
std::string Circle::toString(){
    std::string relleno;
    this->filled? relleno = "Está relleno\n" : "no está relleno\n";
    return "El círculo es color " + this->color + relleno;
}
