//
// Created by el_me on 26/01/2018.
//

#ifndef PO_GCEZAR_A03_CIRCLE_H
#define PO_GCEZAR_A03_CIRCLE_H

#include "Shape.h"

class Circle : virtual public Shape {
protected:
    double radius;
public:
    Circle();
    Circle(std::string color, bool filled, double radius);
    double getRadius ();
    void setRadius(double radius);
    double getArea();
    double getPerimeter();
    std::string toString();
};


#endif //PO_GCEZAR_A03_CIRCLE_H
