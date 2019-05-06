#ifndef SHAPE_H
#include "Shape.hpp"
#endif

#ifndef TRIANGLE_H
#define TRIANGLE_H
#endif

class Triangle : public Shape {
public:
  // Constructor Method Implementation
  Triangle(float _width, float _height);

  // Virtual Method Implementations
  float getArea();
  float getPerimeter();
};