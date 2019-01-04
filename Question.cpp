#include "Question.h"
#include <fstream>
#include <string>



void Question::init()
{

 	std::ifstream fichier( "questions.txt" );
 	std::string ligne;
 	
 	 if ( fichier ) // ce test échoue si le fichier n'est pas ouvert
    {
         // variable contenant chaque ligne lue

        // cette boucle s'arrête dès qu'une erreur de lecture survient
        while ( std::getline( fichier, ligne ) )
        {
 
            set_liste(ligne);
           
        }
    } 
    else std::cout<<"Le fichier questions.txt n'existe pas ou n'est pas situé dans le bon endroit, veuillez vérifier svp"<<std::endl;

}; 

 
 int Question::set_num_question()
 {
 	_num_question++;
 	return(_num_question);
 };