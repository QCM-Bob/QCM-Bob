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
	 


protected:

};