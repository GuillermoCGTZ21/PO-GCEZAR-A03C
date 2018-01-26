//
// Created by el_me on 26/01/2018.
//

#include "Square.h"
Square::Square(){
    this->side = 0.0;
}
Square::Square(double side, std::string color, bool filled){
    this->side = side;
    this->color = color;
    this->filled = filled;
}
double Square::getSide(){
    return side;
}
void Square::setSide(double side){
    this->side = side;
}

void Square::setWidth(double side){
    this->width = side;
}
void Square::setLength(double side){
    this->length = side;
}

std::string Square::toString () {
    std::string relleno;
    this->filled? relleno = "Está relleno\n" : "no está relleno\n";
    return "El círculo es color " + this->color + relleno;
}