#include "Personnage.hh"
 #include <iostream>

Personnage::Personnage()
{
	_persos[0] = "./IMAGE/Move_Patrick.jpg";
    _persos[1] = "./IMAGE/Move_Carlos.jpg";
    _persos[2] ="./IMAGE/bob.jpg";
   
   
};

//Personnage::Personnage(std :: string name){};
Personnage :: ~Personnage()
{SDL_DestroyTexture(_img_perso);};


void Personnage ::choisir_personnage(int i,SDL_Renderer * r)
{
    
     _img_perso=IMG_LoadTexture(r,_persos[i-1].c_str());
     

	// retourne le chemin vers l'image du personnage choisi
    
}

// void Personnage::update()
