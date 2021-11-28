#include "CShape2D.h"

std::ostream &operator<<(std::ostream &os, LineType x) {
    switch (x) {
        case SOLID:
            os << "SOLID";
            break;
        case DASHED:
            os << "DASHED";
            break;
        case DOTTED:
            os << "DOTTED";
            break;
    }
    return os;
}

CShape2D::CShape2D(const CColor &col, LineType lType, bool isFilled) :
    isFilled(isFilled), color (col), lineType(lType) {}

std::ostream &operator<<(std::ostream &os, const CShape2D &d) {
    os << "isFilled: " << d.isFilled << "; color: [" << d.color << "]; lineType: " << d.lineType << "; ";
    return os;
}

bool CShape2D::getIsFilled() const {
    return isFilled;
}

void CShape2D::setIsFilled(bool isFilled) {
    CShape2D::isFilled = isFilled;
}

const CColor &CShape2D::getColor() const {
    return color;
}

void CShape2D::setColor(const CColor &color) {
    CShape2D::color = color;
}

LineType CShape2D::getLineType() const {
    return lineType;
}

void CShape2D::setLineType(LineType lineType) {
    CShape2D::lineType = lineType;
}
