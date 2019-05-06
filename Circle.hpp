
#ifndef SHAPE_H
#include "Shape.hpp"
#endif

#ifndef CIRCLE_H
#define CIRCLE_H
#endif

// Refer to the Rectangle header file for documentation.
class Circle : public Shape {
public:
  // Constructor implementation.
  Circle(float _diameter);
  
  // Virtual Method Implementations.
  float getArea();
  float getPerimeter();
};