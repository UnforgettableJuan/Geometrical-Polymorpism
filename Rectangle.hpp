#ifndef SHAPE_H
#include "Shape.hpp"
#endif

#ifndef RECTANGLE_H
#define RECTANGLE_H
#endif

// The class rectangle inherits from it's parent subclass "Shape".
class Rectangle : public Shape {
public:
  // We will need a constructor that will set the initial values for the private variables.
  Rectangle(float _width, float _height);

  // We will also need to implement our two virtual functions here except this time we don't use the "virtual" keyword.
  float getArea();
  float getPerimeter();
};