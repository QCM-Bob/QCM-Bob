#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <map>

/* La classe Personnage permettra au joueur de choisir le personnage et donc les questions liés à ce personnage. Elle conserve aussi les chemins vers les images grâce à map.  */
class Personnage{
 public :
    Personnage ();
	~Personnage();
    SDL_Texture *get_img_perso(){return _img_perso;}
    void set_PosPerso_x(int x){_PosPerso.x=x;}
    void set_PosPerso_y(int y){_PosPerso.y=y;}
    void set_PosPerso_w(int w){_PosPerso.w=w;}
    void set_PosPerso_h(int h){_PosPerso.h=h;}
    SDL_Rect get_PosPerso(){return _PosPerso;}

   void choisir_personnage(int i, SDL_Renderer * r); // afficher l'image avec les persos
private:

	std:: map< int , std::string> _persos; // les 3 chemins vers les images des personnages )
    SDL_Texture *_img_perso=NULL;
    SDL_Rect _PosPerso;
    
};


