#ifndef Affiche_hpp
#define Affiche_hpp

#include <stdio.h>
#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h> //contenu dans la bibliothèque SDL2
#include <SDL2/SDL_events.h>
#include <iostream>
#include "Window.hh"

/*
 La classe Affiche permet d'afficher les fenêtres créées au fur et à mesure. Nous nous sommes inspirées des tutoriels données sur internet,
 coder avec SDL étant un peu compliqué sans modèle au début.
 Cette classe hérite d'Ecran.
 Nou
 Le but de la classe Affiche qui hérite de la classe Window afin de créer les fonctions qui vont permettre l'affichage .
 On commencera avec init l'affichage de la page d'accueil.
 
 */


class Affiche: public Window
{
    
public:
    Affiche();
    Affiche(SDL_Window *win ,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH);
    ~Affiche();
    int Init(Window* window); // intialisation Page d'accueil
    void clear(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img);
    
};



#endif /* Affiche_hpp */
