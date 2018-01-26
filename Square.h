//
// Created by el_me on 26/01/2018.
//

#ifndef PO_GCEZAR_A03_SQUARE_H
#define PO_GCEZAR_A03_SQUARE_H
#include "Rectangle.h"

class Square : virtual public Rectangle {
protected:
    double side;

public:
    Square();
    Square(double side, std::string color, bool filled);
    double getSide();
    void setSide(double side);

    virtual void setWidth(double side)=0;
    virtual void setLength(double side) = 0;
    virtual std::string toString ();
};


#endif //PO_GCEZAR_A03_SQUARE_H
