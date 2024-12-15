#include "point.h"


Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point Point::operator+(const Point& obj) const {
    Point rez(this->x + obj.x, this->y + obj.y);
    return rez;
}

Point Point::operator-(const Point& obj) const {
    Point rez(this->x - obj.x, this->y - obj.y);
    return rez;
}

Point Point::operator*(const Point& obj) const {
    Point rez(this->x * obj.x, this->y * obj.y);
    return rez;
}

Point Point::operator/(const Point& obj) const {
    Point rez(this->x / obj.x, this->y / obj.y);
    return rez;
}

Point Point::operator+(int a) const {
    Point rez(x + a, y + a);
    return rez;
}

Point Point::operator-(int a) const {
    Point rez(x - a, y - a);
    return rez;
}

Point Point::operator*(int a) const {
    Point rez(x * a, y * a);
    return rez;
}

Point Point::operator/(int a) const {
    Point rez(x / a, y / a);
    return rez;
}

Point Point::operator+=(int rs) {
    x += rs;
    y += rs;
    return *this;
}

Point Point::operator-=(int rs) {
    x -= rs;
    y -= rs;
    return *this;
}

Point Point::operator*=(int rs) {
    x *= rs;
    y *= rs;
    return *this;
}

Point Point::operator/=(int rs) {
    x /= rs;
    y /= rs;
    return *this;
}

bool Point::operator==(const Point& obj) {
    return x == obj.x && y == obj.y;
}

bool Point::operator!=(const Point& obj) {
    return !(*this == obj);
}

bool Point::operator<(const Point& obj) {
    return (x < obj.x) || (x == obj.x && y < obj.y);
}

bool Point::operator<=(const Point& obj) {
    return !(*this > obj);
}

bool Point::operator>(const Point& obj) {
    return (x > obj.x) || (x == obj.x && y > obj.y);
}

bool Point::operator>=(const Point& obj) {
    return !(*this < obj);
}

void Point::Show() const {
    printPoint(*this);
}

int Point::GetX() const {
    return x;
}

int Point::GetY() const {
    return y;
}

Point::operator int() {
    return x + y;
}

Point& Point::operator=(const Point& obj) {
    if (this != &obj) {
        x = obj.x;
        y = obj.y;
    }
    return *this;
}

int& Point::operator[](int index) {
    if (index == 0) return x;
    else if (index == 1) return y;
    else throw std::out_of_range("Index out of range");
}

const int& Point::operator[](int index) const {
    if (index == 0) return x;
    else if (index == 1) return y;
    else throw std::out_of_range("Index out of range");
}

Point& Point::operator++() {
    x++;
    y++;
    return *this;
}

Point Point::operator++(int) {
    Point temp(*this);
    x++;
    y++;
    return temp;
}

Point& Point::operator--() {
    x--;
    y--;
    return *this;
}

Point Point::operator--(int) {
    Point temp(*this);
    x--;
    y--;
    return temp;
}

Point operator+(int number, const Point& obj) {
    Point rez(number + obj.GetX(), number + obj.GetY());
    return rez;
}

Point operator+(const Point& obj, int number) {
    Point rez(number + obj.GetX(), number + obj.GetY());
    return rez;
}

void printPoint(const Point& point) {
    std::cout << "(" << point.GetX() << ", " << point.GetY() << ")";
}

void inputPoint(Point& point) {
    int x, y;
    std::cin >> x >> y;
    point = Point(x, y);
}
