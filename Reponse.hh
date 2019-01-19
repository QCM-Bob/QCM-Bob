#pragma once
#include"Formulation.h"
#include "Question.h"

//Définition de la structure Choix
/*typedef enum{
 1,
 2,
 3
 }Choix;
 
 
 
 // Pour le sortie de flux
 inline std::ostream& operator<<(std::ostream& out,Choix  val){
 
 switch(val){
 case 1:
 out<< "reponses_1.txt";
 break;
 
 case 2:
 out<< "reponses_2.txt";
 break;
 
 case 3:
 out<< "reponses_3.txt";
 break;
 
 }
 return out;
 };
 
 */
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
