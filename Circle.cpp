#define _USE_MATH_DEFINES

#include "Circle.hpp"
#include <cmath>

Circle::Circle(float _diameter) {
  Circle::setFaces(0);
  Circle::setVertices(0);
  Circle::setWidth(_diameter);
  Circle::setHeight(_diameter); 
}

// To find the area of a Circle we multiply the width divided by 2 to the power of 2 by the mathematical constant PI (3.14 blah blah blah).
float Circle::getArea() {
  // 3.14 * (width / 2)^2
  // M_PI = PI (3.14)
  // Pow = input parameter to the power of the second parameter
  return ((float)M_PI * pow((Circle::getWidth() / 2.f), 2));
}

// To find the perimeter of the Circle we multiply the width by PI.
float Circle::getPerimeter() {
  // We can not do math between two different data types so we use a cast to temporarily convert the data type.
  // Be aware that certain types can not be cast to others.
  // x * y == invalid
  // (double)x * y == 0.73
  return ((float)M_PI * Circle::getWidth());
}