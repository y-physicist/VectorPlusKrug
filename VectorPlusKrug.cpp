//
// Created by yPhysicist on 06.05.2022.
//

#include "VectorPlusKrug.h"

void Vector::setVector(double x1, double y1, double x2, double y2) {
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
    this->x = (x1 + x2) / 2;
    this->y = (y1 + y2) / 2;
}

double Vector::mod() {
    return sqrt(abs(pow(this->x1, 2) - pow(this->x2, 2)) + abs(pow(this->y1, 2) - pow(this->y2, 2)));
}

void Vector::getStartPoint() {
    cout << "x1 = " << x1 << " y1 = " << y1 << endl;
}

void Vector::getEndPoint() {
    cout << "x2 = " << x2 << " y2 = " << y2 << endl;
}

void Vector::getVector() {
    cout << "x = " << x << " y = " << y << endl;
}

void Vector::add(Vector a) {
    this->x = this->x + a.x;
    this->y = this->y + a.y;
    this->x2 = a.x2;
    this->y2 = a.y2;
}

void Vector::deduct(Vector a) {
    this->x = this->x - a.x;
    this->y = this->y - a.y;
    this->x1 = a.x2;
    this->y1 = a.y2;
}

void Vector::multKoef(double k) {
    this->x = this->x * k;
    this->y = this->y * k;
    this->x2 = this->x2 * k;
    this->y2 = this->y2 * k;
}

void krug::setRadius(double rad) {
    this->radius = rad;
}

double krug::getRadius() {
    int rad = this->radius;
    return rad;
}
double krug::getPloshad() {
    return Pi * pow(radius, 2);
}

double krug::getLength() {
    return 2 * Pi * this->radius;
}
