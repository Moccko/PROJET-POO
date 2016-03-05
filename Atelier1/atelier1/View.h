#ifndef _VIEW_
#define _VIEW_

#include <SFML/Graphics.hpp>

using namespace std;

const std::string BACKGROUND_IMAGE = "Images/city.png";

class Model;

class View {
private:
    int _w, _h;

    sf::RenderWindow * _window; //fenêtre qui sert de cible pour le  d'entrée
    Model * _model;

    sf::Texture _background;
    sf::Sprite _backgroundSprite;
public:
    View(int w, int h);
    ~View();

    void setModel(Model * model);
    void draw();
    bool treatEvents();

};
#endif
