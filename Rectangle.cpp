#include "Rectangle.hpp"

// Implementing our Rectangle class constructor inside the Rectangle scope.
Rectangle::Rectangle(float _width, float _height) {
  Rectangle::setFaces(4);
  Rectangle::setVertices(4);
  Rectangle::setWidth(_width);
  Rectangle::setHeight(_height);
}

// Implement our virtual methods "getArea" and "getPerimeter".

// We calculate the area of a Rectangle by multiplying the width and the height.
float Rectangle::getArea() {
  return (Rectangle::getWidth() * Rectangle::getHeight());
}

// The Rectangle's perimeter is equal to the width times 2 added to the height times two.
float Rectangle::getPerimeter() {
  return ((Rectangle::getWidth() * 2.f) + (Rectangle::getHeight() * 2.f));
}