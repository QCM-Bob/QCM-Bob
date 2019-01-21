#pragma once
#include"Formulation.h"





class Question: public Formulation{

public:
	Question(){_num_question=0;};
	 ~Question(){};
	 int get_num_question(){return _num_question;} // numéro de la question posée
	 int set_num_question();
     void operator()(int  val);//Cette fonction permet de verifier quel personnage est choisi, et en fonction du personnage choisi ,on affiche les questions de ce dernier à partir du fichier .txt correspodant . 
	 void init();// Tant que le fichier est parcouru , on ajoute à _liste les liens vers les images



protected:
	int _num_question;
    std::string perso_question;
};
