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
 Le but de la classe Affiche qui hérite de la classe Window afin de créer les fonctions qui vont permettre l'affichage .
 Ainsi la fonction Init permet d'initialiser, affichage va afficher à l'écran la page d'accueil. 
 
 */


class Affiche: public Window
{
    
public:
    Affiche();
    Affiche(SDL_Window *win ,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH);
    ~Affiche();
    int Init(Window* window); // va permettre d'initialiser la première page avec Solo, multi ou contre la montre
    void destruction(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img);
    
};



#endif /* Affiche_hpp */
