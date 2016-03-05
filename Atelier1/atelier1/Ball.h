#ifndef BALL_H
#define BALL_H

using namespace std;

class Ball
{
public:
    Ball(int x, int y, int w, int h, int dx, int dy);
    ~Ball();

    void move();
    void setVitesse(int dx, int dy);
    int getPositionX();
    int getPositionY();

private:
    int x, y, w, h, dx, dy;
};

#endif // BALL_H
