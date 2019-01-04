#pragma once
#include"Formulation.h"


class Question: public Formulation {

public:
	Question(){};
	 ~Question(){};
	 int get_num_question(){return _num_question;} // numéro de la question posée
	 void init();



protected:
	int _num_question;
};