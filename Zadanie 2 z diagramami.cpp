
#include <iostream>
#include <string>
using namespace std;

class Shape {
private:
    string color;
    bool filled;
public:
    Shape() {
        color = "green";
        filled = true;
    }

    Shape(string color, bool filled) {
        this->color = color;
        this->filled = filled;
    }
    string getColor() {
        return color;
   }
    void setColor(string color)
    {
        this->color = color;
  }
    bool isFilled() {
        return filled;
   }
   void setFilled(bool filled) {
       this->filled = filled;
   }
   string toString() {
       string status = filled ? "wypelniony" : "niewypelniony";
       return "Ksztalt o kolorze: " + color + " i jest " + status;
   }

};
class Circle : public Shape {
private:
    double radius = 1.0;
public:

    Circle() {
        this->radius = 1.0;
    }
    Circle(double radius) {
        this->radius = radius;
    }
    Circle(double radius, string color, bool filled) : Shape(color, filled) {
    this->radius = radius;
    }
    double getRadius() {
        return radius;
    }

    void setRadius(double radius) {
        this->radius = radius; 
    }
    double getArea() {
       double pole = 3.14159 * radius * radius;
       
        return pole;
    }
    double getPerimeter() {
        double obwod = 2 * 3.14159 * radius;
        return obwod;
    }
    string toString() {
        return "A Circle with radius = " + to_string(radius) + ", which is a subclass of " + Shape::toString();
    }

};
class Rectangle : public Shape{
private:
    double width = 1.0;
    double length = 1.0;
public:
    Rectangle() {
        this->width = 1.0;
        this->length = 1.0;
    }
    Rectangle(double width, double length) {
        this->width = width;
        this->length = length;
    }
    Rectangle(double width, double length,
        string color, bool filled) : Shape(color, filled) {
        this->width = width;
        this->length = length;
    }
    double getWidth() {
        return width;
    }
    void setWidth(double width) {
        this->width = width;
    }
    double getLength() {
        return length;
    }
    void setLength(double length) {
        this->length = length;
    }
        double getArea() {
            double pole_r = width * length;
            return pole_r;
        }
        double getPerimeter() {
            double obwod_r = 2 * (width + length);
            return obwod_r;
        }
        string toString() {
            return "A Rectangle with width = " + to_string(width) +
                " and length = " + to_string(length) +
                ", which is a subclass of " + Shape::toString();
        }
};
class Square : public Rectangle {
public: 

    Square() : Rectangle(1.0, 1.0) { }
    Square(double side) : Rectangle(side, side) { }
    Square(double side, string color, bool filled) 
        : Rectangle(side, side, color, filled) { }
    double getSide() {
        return getWidth();
    }
    void setSide(double side) {
        setWidth(side);
    }
    void setWidth(double side) {
        Rectangle::setWidth(side);
        Rectangle::setLength(side);
    }

    void setLength(double side) {
        Rectangle::setWidth(side);
        Rectangle::setLength(side);
    }
    string toString() {
        return "A Square with side = " + to_string(getWidth()) +
            ", which is a subclass of " + Rectangle::toString();
    }
};


    int main() {
        Circle c(5.0, "niebieski", true);
        Square s(4.0, "czerwony", false);

        cout << c.toString() << endl << " | Pole: " << c.getArea() << endl;
        cout << s.toString() << endl << " | Pole: " << s.getArea() << endl;

        // Testowanie spójności kwadratu
        s.setSide(10.0);
        cout << "Po zmianie boku: " << s.toString() << endl;

        return 0;
    }

