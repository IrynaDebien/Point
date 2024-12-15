#pragma once
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    Point();
    Point(int x, int y);

    Point operator +(const Point& obj) const;
    Point operator -(const Point& obj) const;
    Point operator *(const Point& obj) const;
    Point operator /(const Point& obj) const;
    Point operator+ (int numb)const;
    Point operator- (int numb)const;
    Point operator* (int numb)const;
    Point operator/ (int numb)const;
    Point operator +=(int rs);
    Point operator -=(int rs);
    Point operator *=(int rs);
    Point operator /=(int rs);

    bool operator ==(const Point& obj);
    bool operator !=(const Point& obj);
    bool operator <(const Point& obj);
    bool operator <=(const Point& obj);
    bool operator >(const Point& obj);
    bool operator >=(const Point& obj);

    void Show() const;

    int GetX() const;
    int GetY() const;

    operator int();
    Point& operator=(const Point& obj);
    int& operator[](int index);
    const int& operator[](int index) const;

    Point& operator ++();
    Point& operator --();

    Point operator ++(int i);
    Point operator --(int i);

    friend void printPoint(const Point& point);
    friend void inputPoint(Point& point);
};

Point operator+(int number, const Point& obj);
Point operator+(const Point& obj, int number);
