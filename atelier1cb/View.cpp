#include "View.h"
#include "Model.h"

#include <sstream>
#include <iostream>

using namespace std;
//using namespace sf;

//=======================================
// Constructeur
//=======================================
View::View(int w, int h): _w(w), _h(h){
    _window = new sf::RenderWindow(sf::VideoMode(w, h, 32), "Runner", sf::Style::Close); //


    if (!_background.loadFromFile(BACKGROUND_IMAGE)) //charger un fichier dans le code
        std::cerr << "ERROR when loading image file: " << BACKGROUND_IMAGE << std::endl;
    else {
        _backgroundSprite.setTexture(_background); //Change the source texture of the sprite
        _backgroundSprite.setPosition(sf::Vector2f(0.f,0.f)); //set the position of the object
    }
    if (!_ball.loadFromFile(BALL_IMAGE))
      std::cerr << "ERROR when loading image file: " << BALL_IMAGE << std::endl;
    else {
      _spriteBall.setTexture(_ball);
      _spriteBall.setPosition(sf::Vector2f(0.f,0.f));
    }
}

//=======================================
// Destructeur
//=======================================
View::~View(){
    if(_window!= NULL)
        delete _window;
}

//=======================================
// Accesseurs en écriture
//=======================================
void View::setModel(Model * model){
    _model = model;
}

//=======================================
// Fonction de dessin
//=======================================
void View::draw(){
    _window->clear();

    _window->draw(_backgroundSprite);

    _window->draw (_spriteBall);

    _window->display();
}

//=======================================
// Traitement des evenements
//=======================================
bool View::treatEvents(){
    bool result = false;
    if(_window->isOpen()){
        result = true;

        sf::Event event;
        while (_window->pollEvent(event)) {
            cout << "Event detected" << endl;

            if ((event.type == sf::Event::Closed) ||
                    ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape))) {
                _window->close();
                result = false;
            }
        }
    }
    return result;
}

