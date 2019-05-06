/* Tonight we will be writing a program that does serveral geometrical functions.
This application might take a bit longer than usual, but is relatively straight forwards. You will be learning the fundementals of classes, objects, and polymorphism today. The majority of this application will be completed today, however, we can do it in multiple sessions. */

#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

// We will need a main function which will pause before closing.
int main() {
  // The following is the input/output data flow.
  std::cout << "Choose a diameter for a circle: ";
  float circleDiameter;
  std::cin >> circleDiameter;
  std::cout << std::endl;

  std::cout << "Choose a width for a rectangle/square: ";
  float rectangleWidth;
  std::cin >> rectangleWidth;
  std::cout << std::endl;
  std::cout << "Choose a height for a rectangle: ";
  float rectangleHeight;
  std::cin >> rectangleHeight;
  std::cout << std::endl;

  std::cout << "Choose a width for a triangle: ";
  float triangleWidth;
  std::cin >> triangleWidth;
  std::cout << std::endl;
  std::cout << "Choose a height for a triangle: ";
  float triangleHeight;
  std::cin >> triangleHeight;
  std::cout << std::endl;

  // A class is the layout or model of how the data will be routed.
  // An object is an instance of that class.
  // For example you can have a People class and multiple people that are all of that class.
  // We create an object by calling the class's constructor.
  Circle ourCircle(circleDiameter);
  Rectangle ourRectangle(rectangleWidth, rectangleHeight);
  Triangle ourTriangle(triangleWidth, triangleHeight);

  // Displaying our children class's data.
  std::cout << "Circle Area: " << ourCircle.getArea() << std::endl;
  std::cout << "Circle Perimeter: " << ourCircle.getPerimeter() << std::endl;
  
  std::cout << "Rectangle Faces: " << ourRectangle.getFaces() << std::endl;
  std::cout << "Rectangle Vertices: " << ourRectangle.getVertices() << std::endl;
  std::cout << "Rectangle Area: " << ourRectangle.getArea() << std::endl;
  std::cout << "Rectangle Perimeter: " << ourRectangle.getPerimeter() << std::endl;

  std::cout << "Triangle Faces: " << ourTriangle.getFaces() << std::endl;
  std::cout << "Triangle Vertices: " << ourTriangle.getVertices() << std::endl;
  std::cout << "Triangle Area: " << ourTriangle.getArea() << std::endl;
  std::cout << "Triangle Perimeter: " << ourTriangle.getPerimeter() << std::endl;
  
  // Preventing the program from closing, essentially this is a pause buffer.
  std::cin.get();
  return 0;
}