#pragma once
#include"Formulation.h"
#include "Question.h"


/* La classe reponse hérite de Formulation et est composé d'un vecteur stockant toutes les réponses du QCM.
Elle va permettre de récupérer les réponses aux questions, de vérifier si le joueur à faux ou vrai.
L'initialisation permet de récupérer les réponses selon le choix du personnage ( grâce à l'opérateur ()).  */

class Reponse: public Formulation{

public:
	Reponse(){};
	~Reponse(){};
	void init();
	std::string get_rep(Question q);
	std::string get_affiche_rep(int i){return _affiche_res[i];}
	bool estlaBonneRep(std::string rep,std::string bonne_rep);
	void operator()(int  val);

protected:
	std::string _affiche_res[2];
	std::string perso_reponse;

};
