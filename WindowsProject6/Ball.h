#pragma once
#include "Figure.h"

class Ball :
    public Figure
{
private:
    double x, y, r, v_x, v_y;
    RECT bound_box;
public:
    Ball(double x, double y, double r, double v_x, double v_y);
    void Move(int mks);
    void Draw(HDC hdc);
    void SetBounds(RECT bbox);

};

