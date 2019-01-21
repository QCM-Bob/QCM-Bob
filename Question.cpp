#include "Question.h"
#include <fstream>
#include <string>




void Question::init()
{

	// fichier << 
 	std::ifstream fichier(perso_question);
    std::cout<<perso_question<<std::endl;// chemin vers les images de questions
 	std::string ligne;
    std::string tmp;
 	
 	 if ( fichier ) // si le fichier existe
    {
    
        while ( std::getline( fichier, ligne ) ) // tant que le fichier est parcouru
        {
            
            set_liste(ligne); // on ajoute à _liste les liens vers les images
        }
    } 
    else std::cout<<"Le fichier  n'existe pas ou n'est pas situé dans le bon endroit, veuillez vérifier svp"<<std::endl;
    for(int i=0; i<10;++i) std::cout<<get_liste(i)<<std::endl;
}; 


 int Question::set_num_question() // cette fonction est utilisé pour l'affichage de chaque question, pour passer à la question suivante
 {
 	_num_question++;
 	return(_num_question);
 };


//Cette fonction permet de verifier quel personnage est choisi, et en fonction du personnage choisi ,on affiche les questions de ce dernier à partir du fichier .txt correspodant . 
void Question::operator()(int  val){
    
    
        if(val==1)  perso_question="questions1.txt";
        else if(val==2) perso_question="questions2.txt";
        else  perso_question="questions3.txt";
  
};
