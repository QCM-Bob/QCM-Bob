#pragma once
#include"Formulation.h"





class Question: public Formulation{

public:
	Question(){_num_question=0;};
	 ~Question(){};
	 int get_num_question(){return _num_question;} // numéro de la question posée
	 int set_num_question();
     void operator()(int  val);
	 void init();



protected:
	int _num_question;
    std::string perso_question;
};
