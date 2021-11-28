#include "CCircle.h"

CCircle::CCircle(float x, float y, float radius, const CColor &col, LineType lt, bool isFilled) :
    CShape2D(col, lt, isFilled), center(x, y), radius(radius) {}

CCircle::CCircle(float x, float y, float radius, const CShape2D &base) : CShape2D(base), center(x, y), radius(radius) {}

std::ostream &operator<<(std::ostream &os, const CCircle &circle) {
    os << (CShape2D) circle << "center: [" << circle.center << "]; radius: " << circle.radius << "; ";
    return os;
}

const CPoint2D &CCircle::getCenter() const {
    return center;
}

void CCircle::setCenter(const CPoint2D &center) {
    CCircle::center = center;
}

float CCircle::getRadius() const {
    return radius;
}

void CCircle::setRadius(float radius) {
    CCircle::radius = radius;
}
