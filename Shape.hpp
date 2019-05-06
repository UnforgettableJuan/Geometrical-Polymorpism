#ifndef SHAPE_H
#define SHAPE_H
#endif

// We will need a subclass for all the shapes to inherit from.
// All shapes will inherit from this base shape model.
// In other words the Rectangle, Circle, and Triangle shapes will all have these properties.
class Shape {
public:
  // A method is a function that is owned by the scope of the class it is contained in.
  // This class will have 4 setters (mutator methods) for all the private variables.
  // A mutator method is a public method that changes a private variable.
  // The underscore signifies that this variable is a temporary placeholder parameter.
  void setFaces(int _faces);
  void setVertices(int _vertices);
  void setWidth(float _width);
  void setHeight(float _height);

  // This class will also have 4 getters (accessor methods) for all the private variables as well.
  // An accessor method is a public method that recieves a private variable's value.
  int getFaces();
  int getVertices();
  int getWidth();
  int getHeight();
  
  // Finally we will need two virtual methods with the type <float>
  // They will be called "getArea" and "getPerimeter"
  // A virtual method is a function that will be implemented in another class that inherits the empty method from this subclass.
  virtual float getArea();
  virtual float getPerimeter();
private:
  // This class will have 4 private variables.
  // The number of faces and vertices as type <int>
  // The width and height as type <float>
  int faces;
  int vertices;
  float width;
  float height;
};