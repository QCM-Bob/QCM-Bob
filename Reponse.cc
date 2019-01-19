#include "Reponse.hh"
#include <fstream>



void Reponse::init()
{
	std::ifstream fichier(perso_reponse);
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
    std::cout<<perso_reponse<<std::endl;
    _affiche_res[0]="./IMAGE/Vrai.jpg";
    _affiche_res[1]="./IMAGE/Faux.jpg";
	

};


std::string Reponse::get_rep(Question q)
{
	int i=q.get_num_question();
	return(get_liste(i));
};

bool Reponse::estlaBonneRep(std::string rep,std::string bonne_rep)
{
    if (rep==bonne_rep) return true;
    return false;
};


void Reponse::operator()(int  val){
    
    if(val==1) perso_reponse="reponses1.txt";
   
    else if(val==2) perso_reponse="reponses2.txt";
     else perso_reponse="reponses3.txt";
        
            
};
