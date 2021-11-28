#pragma once

#include <ostream>
#include "CColor.h"

enum LineType {
    SOLID,
    DASHED,
    DOTTED
};

std::ostream &operator<<(std::ostream &os, LineType x);

class CShape2D {
    private:
        bool isFilled;
        CColor color;
        LineType lineType;
    public:
        using enum LineType;
        CShape2D(const CColor &col, LineType lType, bool isFilled);
        friend std::ostream &operator<<(std::ostream &os, const CShape2D &d);

        bool getIsFilled() const;
        void setIsFilled(bool isFilled);
        const CColor &getColor() const;
        void setColor(const CColor &color);
        LineType getLineType() const;
        void setLineType(LineType lineType);
};
