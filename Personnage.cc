#include "Personnage.hh"

Personnage::Personnage(std :: string name){};
Personnage :: ~Personnage(){};

std::string Personnage::get_name() const
{
	return _name;
} 

// Liste d'initialisation c++11:
std::list<std::string> perso_possibles{"./IMAGE/Move_Carlos.jpg","./IMAGE/Move_Patrick.jpg", "./IMAGE/bob.jpg" };


void Personnage ::choisir_personnage(std :: string choix_perso)
{
	enum cas_possible(std :: string a, b ,c ); 
	SDL_Surface *imagePersonnage = NULL;
	SDL_Rect positionImage;
	positionPerso.x=40;
    positionPerso.y=30;
	bool quit = false; 
	SDL_Event e;
	while ( SDL_PollEvent( &e ) != 0 )//tant qu'on quitte pas le jeu
        
    {
        // event handling
     
        SDL_WaitEvent(&e); // gestion des évenements
        if ( e.type == SDL_QUIT )
 				quit = true;
 		if (e.type == SDL_KEYDOWN:)

 				quit = false ;
 		for(std::list<perso_possibles>::const_iterator iter = _db._list_perso_possibles.begin(), end = _db._list_perso_possibles.end(); iter != end; iter++)
		{
				// check if user clicks on a button of the candidats
			(*iter).check_SDL_KeyboardEvent ( &e );
			
		}
	
                
                switch (e.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break;
                
                case SDLK_a: // si il repond A au QCM
               		imagePersonnage = IMG_Load( "bob.png" );
                   
                    break;
                
                case SDLK_b: // si il repond B au QCM
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        score.resultat(i-1,1,"B",i); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image
                    }
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        score.resultat(partie_contrelamontre.get_nombre(j-1),2,"B",j);
                    }
                    
                    break;
                    
            
                case SDLK_c: // si il repond C au QCM
                    
                    if(etat_courant==1) //si on est en mode entrainement
                    {
                        score.resultat(i-1,1,"C",i); //le numéro de la question correspond à l'itérateur i-1 car on a itéré i dès qu'on est passé à l'image
                    }
                    
                    
                    else if(etat_courant==2) // si on est en contre la montre
                    {
                        score.resultat(partie_contrelamontre.get_nombre(j-1),2,"C",j);
                    }
                    break;
                    

}