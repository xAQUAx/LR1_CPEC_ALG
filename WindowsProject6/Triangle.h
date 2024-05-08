#pragma once
#include "Figure.h"
class Triangle :
    public Figure
{
private:
    double x, y, a, h, v_x, v_y;
    RECT bound_box;
public:
    Triangle(double x, double y, double a, double h, double v_x, double v_y);
    void Move(int mks);
    void Draw(HDC hdc);
    void SetBounds(RECT bbox);
};

