#include <iostream>
using namespace std;
class Rectangle 
{
 private: 
 double width;
 double length;
 public:
 void setWidth(double); 
 void setLength(double); 
 double getWidth() const; 
 double getLength() const; 
 double getArea() const;
 double getPerimeter() const;
};
class Circle
{
 private: 
 double radius;
 public:
 void setRadius(double);
 double getRadius() const;
 double getCircArea() const;
 double getCircum() const;
 
};
void Rectangle::setWidth(double w) 
{ 
 width = w;
 
}
void Rectangle::setLength(double len) 
{
 length = len;
}
double Rectangle::getWidth() const
{
 return width;
}
double Rectangle::getLength() const
{
 return length;
}
double Rectangle::getArea() const
{
 return width * length;
}
double Rectangle::getPerimeter() const
{
 return width + width + length + length;
 
}
void Circle::setRadius(double r) 
{ 
 radius = r;
 
}
double Circle::getRadius() const
{
return radius;
}
double Circle::getCircum() const
{
 return 2*3.14* radius;
}
double Circle::getCircArea() const
{
 return (radius*radius)*3.14;
}
int main()
{
 Rectangle box;
double rectWidth;
double rectLength;
double circRadius;
Circle circ;
 cout << "Finding the area and perimeter of a rectangle. What is the width?" << endl;
 cin >> rectWidth;
 cout << "What is the length?" << endl;
 cin >> rectLength;
 box.setWidth(rectWidth);
 box.setLength(rectLength);
 cout << "The area of the rectangle is " << box.getArea() << endl;
 cout << "The perimeter of the rectangle is " << box.getPerimeter() << endl;
cout << "Finding the circumference and area of a circle. What is the radius?" << endl;
cin >> circRadius;
 circ.setRadius(circRadius);
cout << "The circumference of a circle is " << circ.getCircum() << endl;
cout << "The area of a circle is " << circ.getCircArea() << endl;
