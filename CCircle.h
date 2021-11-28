#pragma once

#include <ostream>
#include "CShape2D.h"
#include "CPoint2D.h"

class CCircle : public CShape2D  {
    private:
        CPoint2D center;
        float radius;
    public:
        CCircle(float x, float y, float radius, const CColor &col, LineType lt, bool isFilled);
        CCircle(float x, float y, float radius, const CShape2D &base);
        friend std::ostream &operator<<(std::ostream &os, const CCircle &circle);

        const CPoint2D &getCenter() const;
        void setCenter(const CPoint2D &center);
        float getRadius() const;
        void setRadius(float radius);
};



