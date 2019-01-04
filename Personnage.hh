#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <list>
class Personnage{
 public :
	Personnage ();
	Personnage(std :: string name ); 
	~Personnage(){};

	void choisir_personnage(std :: string choix_perso); // afficher l'image avec les persos après key.event -> si key_a: bob...
	//void add_energy(int s){ _energy += s;}
	//int energy()const{return _energy;}
private:

	std::string choix_perso; // chemin vers l'image du perso choisis
	list perso_possibles; // les 3 chemins vers les images des personnages ( bob list[0], patrick.pg list...)
}