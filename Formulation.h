#pragma once
#include<vector>
#include<string>
#include<iostream>

// Classe mère virtuelle pour les classes questions et réponses
class Formulation{

public:
	Formulation(){};
	virtual ~Formulation(){}; // delete vector
	//virtual void affiche_SDL() const=0;
    virtual void init() = 0; // fonction virtuelle pure qui Permettra par la suite d'affecter les chemins vers les images
	std::string get_liste(int i){return  _liste[i];}
	void set_liste( std::string l){_liste.push_back(l);}


protected:
    std::vector<std::string> _liste; // Chemin pour les questions et réponses


};
