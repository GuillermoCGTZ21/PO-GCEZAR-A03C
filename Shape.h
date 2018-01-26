//
// Created by el_me on 26/01/2018.
//

#ifndef PO_GCEZAR_A03_SHAPE_H
#define PO_GCEZAR_A03_SHAPE_H


#include <string>

class Shape {
protected:
    std::string color;
    bool filled;

public:
    Shape();
    Shape(std::string color, bool filled);

    std::string getColor();
    void setColor(std::string color);
    bool isFilled();
    void setFilled(bool filled);

    virtual double getArea() = 0;
    virtual double getPerimeter()= 0;
    virtual std::string toString();
};


#endif //PO_GCEZAR_A03_SHAPE_H
