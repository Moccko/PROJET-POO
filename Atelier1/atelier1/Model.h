#ifndef _MODEL_
#define _MODEL_

#include "Ball.h"

using namespace std;

class Model {
 private:
  int _w, _h;
  Ball *balle;

 public:

  Model(int w, int h);
  ~Model();

  void nextStep();
  void getBallPosition(int &x, int &y);
};
#endif
