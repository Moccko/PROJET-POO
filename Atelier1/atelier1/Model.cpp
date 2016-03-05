#include "Model.h"
#include <iostream>
#include <fstream>
using namespace std;

//=======================================
// Constructeurs
//=======================================
Model::Model(int w, int h)
  :  _w(w), _h(h) {}

//=======================================
// Destructeurs
//=======================================
Model::~Model(){}

//=======================================
// Calcul la prochaine étape
//=======================================
void Model::nextStep(){}

void Model::getBallPosition(int &x, int &y)
{
    x=balle->getPositionX ();
    y=balle->getPositionY ();
}
