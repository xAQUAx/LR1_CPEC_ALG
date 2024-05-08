#pragma once
#include "Figure.h"
class Coub :
    public Figure
{
private:
    double x, y, a, v_x, v_y;
    RECT bound_box;
public:
    Coub(double x, double y, double a, double v_x, double v_y);
    void Move(int mks);
    void Draw(HDC hdc);
    void SetBounds(RECT bbox);
};