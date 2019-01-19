#pragma once
#include"Formulation.h"

//Définition de la structure Choix
/*typedef enum{ 1, 2, 3 }Choix;

// Pour le sortie de flux
inline std::ostream& operator<<(std::ostream& out,Choix  val){
    
    switch(val){
        case 1:
            out<< "questions_1.txt";
            break;
            
        case 2:
            out<< "questions_2.txt";
            break;
            
        case 3:
            out<< "questions_3.txt";
            break;
            
    }
    return out;
};

*/
class Question: public Formulation{

public:
	Question(){_num_question=0;};
	 ~Question(){};
	 int get_num_question(){return _num_question;} // numéro de la question posée
	 int set_num_question();
	
	 void init();



protected:
	int _num_question;
};
