#ifndef Window_hpp
#define Window_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <iostream>

/*
 Le but principal de cette classe window est de poser les éléments pour affichage ,
 Comme la fenetre, l'image, les dimensions, le nom de la fenetre ainsi que le chemin. 
 
 */

class Window // donne le cadre de l'image
{
    
    
public:
    //constructeur 
    Window();
    Window(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH);
   //Destructeur
    ~Window();
    
    const std::string get_screen_name(){return _screen_name;}
    const std::string get_path(){return _PATH;}
    

    SDL_Window* get_window(){return _win;}
    SDL_Renderer* get_renderer(){return _renderer;}
    SDL_Texture* get_img(){return _img;}

    int get_l(){return _l;}
    int get_h(){return _h;}
    
    protected:
    // La fenêtre à laquelle nous allons rendre
    SDL_Window* _win;
    // Le rendu de fenêtre pour les graphiques
    SDL_Renderer* _renderer;
    // La surface contenue par la fenêtre
    SDL_Texture* _img;
    
    int _l; // longueur
    int _h; // hauteur
    const std::string _screen_name;
    const std::string _PATH; //chemin pour l'image
    
};





#endif 