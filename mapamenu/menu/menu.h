#ifndef MENU_H
#define MENU_H

#pragma once
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#define kVel 5
using namespace std;
#define width 640
#define height 480

class Menu {
  private:
  sf::Texture background;
  sf::Sprite backgroundImage;
  sf::Texture pausa;
  sf::Sprite pausaImage;
  sf::Sprite playImage;
  sf::Texture play;
  sf::Sprite atrasImage;
  sf::Texture atras;
  sf::Sprite nivelesImage;
  sf::Texture niveles;
  sf::Texture menos;
  sf::Sprite menosImage;
  sf::Texture plus;
  sf::Sprite plusImage;
  sf::Font fuente;
  sf::String cadena;
  sf::Text texto;
  sf::Texture facil;
  sf::Sprite facilImage;
  sf::Texture normal;
  sf::Sprite normalImage;
  sf::Texture dificil;
  sf::Sprite dificilImage;
  sf::Texture splayer;
  sf::Sprite splayerImage;
  sf::Texture mplayer;
  sf::Sprite mplayerImage;
  sf::Texture exit;
  sf::Sprite exitImage;                
  sf::Sprite sprite;

    bool gpause=false;
    bool jugando=false;
    int players=0;
    int lvls=3;
    int dificulty=0;//0 facil 1 normal 2 dificil
    int menus=0;//0 principal, 1 un jugador, 2 multijugador, 3 opciones
    
    static Menu* pinstance;

  public:
    Menu();
    static Menu* Instance();
    void Update(sf::Event event,sf::RenderWindow &window);
    void Draw(sf::RenderWindow &window);

  protected:
    void Cargarecursos();


};

#endif