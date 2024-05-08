#include "Ball.h"

Ball::Ball(double x, double y, double r, double v_x, double v_y)
{
	this->x = x;
	this->y = y;
	this->r = r;
	this->v_x = v_x;
	this->v_y = v_y;
}

void Ball::Move(int mks)
{
	x = x + v_x * mks / 1000000.0;
	y = y + v_y * mks / 1000000.0;

	if (((x + r) > bound_box.right) || ((x - r) < bound_box.left))
		v_x = -v_x;
	if (((y + r) > bound_box.bottom) || ((y - r) < bound_box.top))
		v_y = -v_y;
}

void Ball::Draw(HDC hdc)
{
	HPEN penBall = CreatePen(PS_SOLID, 3, RGB(150, 0, 0));
	HBRUSH ballBrush = CreateSolidBrush(RGB(200, 0, 200));
	SelectObject(hdc, penBall);
	SelectObject(hdc, ballBrush);
	Ellipse(hdc, x - r, y - r, x + r, y + r);
	DeleteObject(ballBrush);
	DeleteObject(penBall);
}

void Ball::SetBounds(RECT bbox)
{
	this->bound_box = bbox;
}