#pragma once
#include <iostream>
using namespace std;
class Point
{
public:
	Point();
	Point(const Point &p1);
	Point(double x, double y);
	~Point();
private:
	double x_;
	double y_;
public:
	void set(double x, double y);
	void setX(double x);
	void setY(double y);
	double getX() const; //
	double getY() const;
	double length(const Point &p1) const; //
	double length() const;
	Point operator+(const Point &p1) const;
	Point operator+(double temp) const;
	Point operator=(const Point &p1);
	bool operator==(const Point &p1) const;
	bool operator<(const Point &p1) const;
	bool operator>(const Point &p1) const;
	friend ostream &operator<<(ostream& out, const Point& ob1);
	friend istream &operator>>(istream& out, Point& ob1);
};

