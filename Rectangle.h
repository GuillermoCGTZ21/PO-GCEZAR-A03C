//
// Created by el_me on 26/01/2018.
//

#ifndef PO_GCEZAR_A03_RECTANGLE_H
#define PO_GCEZAR_A03_RECTANGLE_H
#include "Shape.h"

class Rectangle : virtual public Shape{
protected:
    double width;
    double length;

public:
    Rectangle();
    Rectangle(double width, double length, std::string color, bool filled);

    double getWidth();
    void setWidth (double width);
    double getLength ();
    void setLength (double length);
    double getArea();
    double getPerimeter();
    std::string toString();
};


#endif //PO_GCEZAR_A03_RECTANGLE_H
