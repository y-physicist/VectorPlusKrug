//
// Created by yPhysicist on 06.05.2022.
//

#ifndef VECTORPLUSKRUG_VECTORPLUSKRUG_H
#define VECTORPLUSKRUG_VECTORPLUSKRUG_H

#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.14;

struct Vector {
    double x1;
    double y1;
    double x2;
    double y2;
    double x;
    double y;
    void setVector(double, double, double, double);
    double mod();
    void getStartPoint();
    void getEndPoint();
    void getVector();
    void add(Vector);
    void deduct(Vector);
    void multKoef(double);
};

struct krug {
    double radius;
    void setRadius(double);
    double getRadius();
    double getPloshad();
    double getLength();
};

#endif //VECTORPLUSKRUG_VECTORPLUSKRUG_H
