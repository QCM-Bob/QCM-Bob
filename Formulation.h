#pragma once
#include<vector>
#include<string>
#include<iostream>

// Classe mère virtuelle pour les classes questions et réponses
class Formulation{

public:
	Formulation(){};
	virtual ~Formulation(){};
	//virtual void affiche_SDL() const=0;
    virtual void initialisation()=0; // Permettra par la suite d'affecter les chemins vers les images
	std::vector<std::string> get_question(int i){return  _questions[i];}


protected:
    std::vector<std::string> _liste; // Chemin pour les questions et réponses


};
