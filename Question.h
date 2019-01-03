#pragma once
#include"Formulation.h"


class Question: public Formulation {

public:
	Question(std::string question, std::string r1, std::string r2, std::string r3, int vraie_rep);
	 ~Question(){};
	
	 std::string get_question() {return _question;}
	 
	 void affiche_SDL() const;
	 void askQuestion();



protected:
	std::string _question;
	int _vraie_rep;
};