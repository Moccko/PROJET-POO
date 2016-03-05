#include "Ball.h"

Ball::Ball(int x, int y, int w, int h, int dx, int dy)
{
    this->x=x;
    this->y=y;
    this->w=w;
    this->h=h;
    this->dx=dx;
    this->dy=dy;
}

Ball::~Ball()
{

}

void Ball::move()
{
    this->x+=this->dx;
    this->y+=this->dy;
}

void Ball::setVitesse(int dx, int dy)
{
    this->dx=dx;
    this->dy=dy;
}

int Ball::getPositionX()
{
    return this->x;
}

int Ball::getPositionY()
{
    return this->y;
}
