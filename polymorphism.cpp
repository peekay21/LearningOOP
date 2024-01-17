#include <iostream>

// Base class
class Shape {
public:
    // Virtual function to calculate area (to be overridden by derived classes)
    virtual double calculateArea() const {
        return 0.0;
    }

    // Virtual destructor to ensure proper cleanup when deleting objects through base pointers
    virtual ~Shape() {
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
    }

    // Override the calculateArea function
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
    }

    // Override the calculateArea function
    double calculateArea() const override {
        return length * width;
    }
};

// Function to display the area of a shape using a base pointer
void displayArea(const Shape& shape) {
    std::cout << "Area: " << shape.calculateArea() << std::endl;
}

int main() {
    // Create objects of derived classes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Use base pointers to achieve polymorphism
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    // Call the displayArea function with different shapes
    displayArea(*shape1);
    displayArea(*shape2);

    return 0;
}
