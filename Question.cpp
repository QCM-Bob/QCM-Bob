#include "Question.h"
#include <fstream>
#include <string>

void Question::init()
{

 	std::ifstream fichier( "questions.txt" ); // chemin vers les images de questions
 	std::string ligne;
    std::string tmp;
 	
 	 if ( fichier ) // si le fichier existe
    {
    
        while ( std::getline( fichier, ligne ) ) // tant que le fichier est parcouru
        {
            
            set_liste(ligne); // on ajoute à _liste les liens vers les images
        }
    } 
    else std::cout<<"Le fichier questions.txt n'existe pas ou n'est pas situé dans le bon endroit, veuillez vérifier svp"<<std::endl;
}; 


 int Question::set_num_question() // cette fonction est utilisé pour l'affichage de chaque question, pour passer à la question suivante
 {
 	_num_question++;
 	return(_num_question);
 };
