#include"Question.h"
#include"Reponse.hh"
#include"Affiche.hh"
#include"Window.hh"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h> //contenu dans la bibliothèque SDL2
#include <cstring>
#include<string>
#include<iostream>
using namespace std;
#define IMG_PATH "./IMAGE/Acceuil.jpeg"
#define WIDTH 935
#define HEIGHT 520




int main(int argc, char const *argv[])
{


	SDL_Window *win = NULL; // crée la fenetre
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL; // pour l'image
    

	 Window wi(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpeg");
    
    Affiche premiere_image(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpeg");

    int w=wi.get_l();
    int h=wi.get_h();

  win = SDL_CreateWindow("Projet Bob L'éponge", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0); // cree la fenetre
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
    
    
    img = IMG_LoadTexture(renderer, IMG_PATH); // charge l'image
    
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/70; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image */

    bool quit = false;

	Question q;
	q.init();
	Reponse r;
	r.init();

    int i=q.get_num_question();
    std::string bonne_rep;
	 SDL_Event e;
        SDL_WaitEvent(&e); // gestion des évenements

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
                    
                case SDLK_UP: // si il appuie sur 1 -> on fait de l'entrainement 
                    // fonction void choix_perso ? 
                   img = IMG_LoadTexture(renderer, "./IMAGE/Choice_Perso.jpg"); // pour le choix du perso-> dans perso mettre cette image
                    SDL_QueryTexture(img, NULL, NULL, &w, &h);
                   // faudra les fonctions de perso
                    break;
                case SDLK_RIGHT: 
                    if(i<10){
                     img = IMG_LoadTexture(renderer,q.get_liste(i).c_str()); // charge l'image
                     if (img==NULL) std::cout<<"ERROR LOAD TEXTURE"<<std::endl;
                     SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur */
                     bonne_rep=r.get_rep(q);
                     i=q.set_num_question();//on passe  à la question suivante
              
                 }
                 else quit=true;

                break;

                case SDLK_a:
                if (r.estlaBonneRep("A",bonne_rep)) std::cout<<"Bien joué"<<std::endl;

                break;
                case SDLK_b:
                if (r.estlaBonneRep("B",bonne_rep)) std::cout<<"Bien joué"<<std::endl;

                break;
                case SDLK_c:
                if (r.estlaBonneRep("C",bonne_rep)) std::cout<<"Bien joué"<<std::endl;

                 break;
              }
              break;
      

    }
      
		 SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, img, NULL, &texr);
        SDL_RenderPresent(renderer);
        

}
	premiere_image.destruction(wi.get_renderer(),wi.get_window(),wi.get_img());
}

// Il faut qu'on voit comment on sait qu'elle est la bonne réponse càd faut que choix r1 égale reponses