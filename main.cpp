#include <iostream>
#include "CCircle.h"

using namespace std;

int main() {
    CCircle filledRedCir(10.0, 10.0, 5.0, CColor::RED, CShape2D::SOLID, true);
    CColor col(0, 100, 100);
    CShape2D baseShape(col, CShape2D::DASHED, false);
    CCircle dashedCir(50.0, 50.0, 5.0, baseShape);

    cout << "Filled red solid: " << endl << filledRedCir << endl;
    cout << "Unfilled cyan dashed: " << endl << dashedCir << endl;
}
