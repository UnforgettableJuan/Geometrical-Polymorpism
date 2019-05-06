#include "Triangle.hpp"

// Implementing our Triangle class constructor inside the Rectangle scope.
Triangle::Triangle(float _width, float _height) {
  Triangle::setFaces(3);
  Triangle::setVertices(3);
  Triangle::setWidth(_width);
  Triangle::setHeight(_height);
}

// To find the area of a Triangle we multiple the width by the height and divide the outcome by 2.
float Triangle::getArea() {
  return ((Triangle::getWidth() * Triangle::getHeight()) / 2.f);
}

// To get the perimeter of a Triangle we add the width to the height multipled by 2.
float Triangle::getPerimeter() {
  return (Triangle::getWidth() + (Triangle::getHeight() * 2.f));
}