// We use ""s instead of <>s when including a user made header file.
#include "Shape.hpp"
#include <iostream>

// Setters (Mutator Methods)
void Shape::setFaces(int _faces) {
  Shape::faces = _faces;
}

void Shape::setVertices(int _vertices) {
  Shape::vertices = _vertices;
}
void Shape::setWidth(float _width) {
  Shape::width = _width;
}

void Shape::setHeight(float _height) {
  Shape::height = _height;
}

// Getters (Accessor Methods)
int Shape::getFaces() {
  return Shape::faces;
}

int Shape::getVertices() {
  return Shape::vertices;
}

int Shape::getWidth() {
  return Shape::width;
}

int Shape::getHeight() {
  return Shape::height;
}

// Virtuals Methods Are Left Unimplemented Until Inherited By Child Class
float Shape::getArea() {
  std::cout << "Base shape model has no virtual method for getArea!" << std::endl;
  return 0.f;
}

float Shape::getPerimeter() {
  std::cout << "Base shape model has no virtual method for getPerimeter!" << std::endl;
  return 0.f;
}