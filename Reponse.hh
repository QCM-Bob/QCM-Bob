#pragma once
#include"Formulation.h"
#include "Question.h"


// peut etre enum rep V, F -> event.key ici ou dans score ?

/* La classe reponse hérite de Formulation et est composé d'un vecteur stockant toutes les réponses du QCM. */

class Reponse: public Formulation{

public:
	Reponse(){};
	~Reponse(){};
	void init();
	std::string get_rep(Question q);
	std::string get_affiche_rep(int i){return _affiche_res[i];}
	bool estlaBonneRep(std::string rep,std::string bonne_rep);

protected:
	std::string _affiche_res[2];

};