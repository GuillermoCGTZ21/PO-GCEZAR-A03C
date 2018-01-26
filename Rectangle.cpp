//
// Created by el_me on 26/01/2018.
//

#include "Rectangle.h"
Rectangle::Rectangle(){
    this->width = 0.0;
    this->length = 0.0;
}
Rectangle::Rectangle(double width, double length, std::string color, bool filled){
    this->color = color;
    this->filled = filled;
    this->length = length;
    this->width= width;
}
double Rectangle::getWidth(){
    return width;
}
void Rectangle::setWidth (double width){
    this->width = width;
}
double Rectangle::getLength (){
    return length;
}
void Rectangle::setLength (double length){
    this->length = length;
}
double Rectangle::getArea() {
    return width * length;
}
double Rectangle::getPerimeter(){
    return (2*length) + (2*width);
}
std::string Rectangle::toString(){
    std::string relleno;
    this->filled? relleno = "Está relleno\n" : "no está relleno\n";
    return "El círculo es color " + this->color + relleno;
}