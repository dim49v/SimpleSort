#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
Point::Point() : x_(0), y_(0)
{
}
Point::Point(const Point &p1){
	x_ = p1.x_;
	y_ = p1.y_;
}

Point::Point(double x, double y) : x_(x), y_(y)
{
}

Point::~Point()
{
}
void Point::set(double x, double y){
	x_ = x;
	y_ = y;
}
void Point::setX(double x){
	x_ = x;
}
void Point::setY(double y){
	y_ = y;
}
double Point::getX() const{
	return x_;
}
double Point::getY() const{
	return x_;
}
double Point::length(const Point &p1) const{
	double a, b;
	a = x_ - p1.x_;
	b = y_ - p1.y_;
	return sqrt(a*a + b*b);
}
double Point::length() const{
	return sqrt(x_ * x_ + y_ * y_);
}
Point Point::operator+(const Point &p1) const{
	return Point(x_ + p1.x_, y_ + p1.y_);
}
Point Point::operator+(double temp) const{
	return Point(x_ + temp, y_ + temp);
}
Point Point::operator=(const Point &p1){
	x_ = p1.x_;
	y_ = p1.y_;
	return* this;
}
ostream &operator<<(ostream& out, const Point& ob1){
	out << "x= " << ob1.x_ << " y= " << ob1.y_ << endl;
	return out;
}
istream &operator>>(istream& in, Point& ob1){
	cout << "x= ";
	in >> ob1.x_;
	if (!in){
		cout << "Error in" << endl;
		system("pause");
		exit(1);
	}
	cout << "y= ";
	in >> ob1.y_;
	if (!in){
		cout << "Error in" << endl;
		system("pause");
		exit(1);
	}
	return in;
}
bool Point::operator==(const Point &p1) const{
	return (x_ == p1.x_) && (y_ == p1.y_);
}
bool Point::operator<(const Point &p1) const{
	return (this->length() < p1.length());
}
bool Point::operator>(const Point &p1) const{
	return (this->length() > p1.length());
}