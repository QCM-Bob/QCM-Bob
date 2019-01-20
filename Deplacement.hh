#pragma once 
#include<iostream>
#include<string>
#include "Personnage.hh"


/* La classe Deplacement permet de gérer les déplacements du personnage selon la véracité de ses réponses.
 Elle n'a pas d'attributs mais est liée à la classe Personnage avec ses fonction init et deplace.*/

class Deplacement
{
public:
	Deplacement(){};
	~Deplacement(){};
	virtual void init(Personnage &p); // Le personnage est placé dans un coin précis de la fenêtre
	void deplace(Personnage &p, bool b); // Le personnage se déplace à droite si sa réponse est bonnek, à gauche sinon
	
};
