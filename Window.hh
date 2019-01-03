#ifndef Window_hpp
#define Window_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <iostream>

/*
 Le but de la classe window est de poser les éléments pour affichage en l'occurence la fenetre, l'image, les dimensions, le nom de la fenetre et le chemin. 
 
 */

class Window // donne le cadre de l'image
{
    
protected:
    SDL_Window* _win;
    SDL_Renderer* _renderer;
    SDL_Texture* _img;
    
    int _l; // longueur
    int _h; // hauteur
    const std::string _screen_name;
    const std::string _PATH; //chemin pour l'image
    
public:
    Window();
    Window(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH);
    ~Window();
    
    SDL_Window* get_window(){return _win;}
    SDL_Renderer* get_renderer(){return _renderer;}
    SDL_Texture* get_img(){return _img;}
    
    const std::string get_screen_name(){return _screen_name;}
    const std::string get_path(){return _PATH;}
    
    int get_l(){return _l;}
    int get_h(){return _h;}
    
    
};





#endif /* Ecran_hpp */