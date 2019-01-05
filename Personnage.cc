#include "Personnage.hh"
 #include <iostream>

using namespace std;



//Personnage::Personnage(std :: string name){};
//Personnage :: ~Personnage(){};

/*std::string Personnage::get_name() const
{
	return _name;
} */

// Liste d'initialisation c++11:
//std::list<std::string> perso_possibles{"./IMAGE/Move_Carlos.jpg","./IMAGE/Move_Patrick.jpg", "./IMAGE/bob.jpg" };


void Personnage ::choisir_personnage(std :: string choix_perso)
{

	std:: map< std::string , std::string> a;
	//map< std::string ,std:: string> a;
	//a["Bob"] =IMG_PATH; 
    a["Bob"] ="./IMAGE/bob.jpg";  
	a["./IMAGE/Move_Carlos.jpg"] = "Carlos";
	a["./IMAGE/Move_Patrick.jpg"] = "Patrick";


	//enum cas_possible(std :: string a, b ,c );
	/*std:: map< string , string> l;
	std :: Map<String, String> l = new HashMap<String, String>();
    l.put("Bob", "./IMAGE/bob.jpg");
    l.put("Carlos", "./IMAGE/Move_Carlos.jpg");
    l.put("Patrick", "./IMAGE/Move_Patrick.jpg");*/


	//map< string , string> a;
	//a["./IMAGE/bob.jpg" ] = "Bob";
	//a["./IMAGE/Move_Carlos.jpg"] = "Carlos";
	//a["./IMAGE/Move_Patrick.jpg"] = "Patrick";


	SDL_Surface *imagePersonnage = NULL;
	SDL_Rect positionImage;
	SDL_Rect positionPerso;
	positionPerso.x=0;
    positionPerso.y=0;
	bool quit = false; 

	while (!quit) //tant qu'on quitte pas le jeu
        
    {
        // event handling
        SDL_Event e;
        SDL_WaitEvent(&e); // gestion des évenements

        switch (e.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
                
            case SDL_KEYDOWN:
                
                switch (e.key.keysym.sym)
            {
                case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break;
                
                case SDLK_a: // si il repond A au QCM
               		//imagePersonnage = IMG_Load( a.get("Bob"));
                	imagePersonnage = IMG_Load( "Bob");
                    break;
                
                case SDLK_b: // si il repond B au QCM
                	//imagePersonnage = IMG_Load( a.get("Carlos"));
                	imagePersonnage = IMG_Load( "Carlos");
                 	break;

            
                case SDLK_c: // si il repond C au QCM
                	//imagePersonnage = IMG_Load( a.get("Patrick"));
                	imagePersonnage = IMG_Load( "Patrick" );
                	break;
                    
            }
        }
    }
}