#include "point.h"

int main()
{
    Point p1(1, 2);
    Point p2(3, 4);

    Point p3 = p1 + p2;
    printPoint(p3);

    Point p4 = p1 - p2;
    printPoint(p4);

    Point p5 = p1 * p2;
    printPoint(p5);

    Point p6 = p2 / p1;
    printPoint(p6);

    Point p7 = p1.operator+(5);
    printPoint(p7);

    Point p8 = p2 - 2;
    printPoint(p8);

    p1 += 3;
    printPoint(p1);

    p2 *= 2;
    printPoint(p2);

    if (p1 == p2)
        printPoint(p1);
    else
        printPoint(p2);

    if (p1 != p2)
        printPoint(p2);

    ++p1;
    printPoint(p1);

    p1++;
    printPoint(p1);

    --p1;
    printPoint(p1);

    p1--;
    printPoint(p1);

    int sum = static_cast<int>(p1);
    printPoint(p1);

    printPoint(p1);

    Point p9;
    printPoint(p9);

    return 0;
}
