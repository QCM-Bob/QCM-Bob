#pragma once
#include<vector>
#include<string>
#include<iostream>

/* Formulation est une classe mère virtuelle pour les classes Question et Réponse.
 Elle est composée d'une fonction virtuelle: init et d'une liste qui gardera tous les chemins utils. */
class Formulation{

public:
	Formulation(){};
	virtual ~Formulation(){_liste.clear();}; // delete vector
    virtual void init() = 0; // fonction virtuelle pure qui Permettra par la suite d'affecter les chemins vers les images
	std::string get_liste(int i){return  _liste[i];}
	void set_liste( std::string l){_liste.push_back(l);}


protected:
    std::vector<std::string> _liste; // Chemin pour les questions et réponses


};
