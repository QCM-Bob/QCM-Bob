#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <map>

class Personnage{
 public :
    Personnage ();
	//Personnage(std :: string name );
	~Personnage();
    SDL_Texture *get_img_perso(){return _img_perso;}
    //void set_img_perso( SDL_Texture *img){_img_perso=img;}
    void set_PosPerso_x(int x){_PosPerso.x=x;}
    void set_PosPerso_y(int y){_PosPerso.y=y;}
    void set_PosPerso_w(int w){_PosPerso.w=w;}
    void set_PosPerso_h(int h){_PosPerso.h=h;}
    SDL_Rect get_PosPerso(){return _PosPerso;}

   void choisir_personnage(int i, SDL_Renderer * r); // afficher l'image avec les persos
    //key.event -> si key_a: bob...
	//void add_energy(int s){ _energy += s;}
	//int energy()const{return _energy;}
private:

	std:: map< int , std::string> _persos; // les 3 chemins vers les images des personnages ( bob list[0], patrick.pg list...)
    SDL_Texture *_img_perso=NULL;
    SDL_Rect _PosPerso;
    
};


