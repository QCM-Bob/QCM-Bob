#include "Reponse.hh"
#include <fstream>



void Reponse::init()
{
	std::ifstream fichier( "reponses.txt" );
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
    else std::cout<<"Le fichier reponses.txt n'existe pas ou n'est pas situé dans le bon endroit, veuillez vérifier svp"<<std::endl;

	

};


std::string Reponse::get_rep(Question q)
{
	int i=q.get_num_question();
	return(get_liste(i));
};
