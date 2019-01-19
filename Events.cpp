#include "Events.h"
#include"Question.h"
#include"Reponse.hh"
#include"Affiche.hh"
#include"Window.hh"
#include "Personnage.hh"
#include "Deplacement.hh"
#include "Score.hh"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h> //contenu dans la bibliothèque SDL2
#include <cstring>
#include<string>
#include<iostream>
using namespace std;
#define IMG_PATH "./IMAGE/Acceuil.jpeg"
#define WIDTH 1100
#define HEIGHT 650


void Events()
{



	SDL_Window *win = NULL; // crée la fenetre
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL; // pour l'image
    SDL_Rect Pos;  // pour le personnage
    
	 Window wi(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpeg"); // on crée l'écran
    
    Affiche affichage(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpeg"); // on c

    int w=wi.get_l();
    int h=wi.get_h();

    win = SDL_CreateWindow("Projet Bob L'éponge", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0); // cree la fenetre
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
   

    img = IMG_LoadTexture(renderer, IMG_PATH); // charge l'image
    
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/70; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image */

    bool quit = false;

///////////////////////////////// INTIALISATION JEU //////////////////////////////////////////////////////////////
	Question q;
	//q.init();
	Reponse r;
	//r.init();
    Score s;

    Personnage perso;
    Deplacement d;
    d.init(perso);
   Pos=perso.get_PosPerso();

    int i=q.get_num_question();
    int choix=0;
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
            std::cout<<"I am here"<<std::endl;
	
	 		case SDL_KEYDOWN:
                
                switch (e.key.keysym.sym)
            {
            	 case SDLK_ESCAPE: /* Appui sur la touche Echap, on arrête le programme */
                    quit= true;
                    break; 

                    case SDLK_UP:  
                       img = IMG_LoadTexture(renderer, "./IMAGE/Choice_Perso.jpg"); 
                    case SDLK_1:
                        perso.choisir_personnage(1,renderer);
                        SDL_QueryTexture(perso.get_img_perso(), NULL, NULL, &Pos.w, &Pos.h);
                    choix=1;
                    break;

                    case SDLK_2:
                        perso.choisir_personnage(2,renderer);
                        SDL_QueryTexture(perso.get_img_perso(), NULL, NULL, &Pos.w, &Pos.h);
                    choix=2;
                    break;
                    case SDLK_3:
                        perso.choisir_personnage(3,renderer);
                        SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h);
                    choix=3;
                    
                    break;


                case SDLK_RIGHT: 
                    if(i<10){
                        if (choix>=1 && choix<=3){ q(choix); r(choix); q.init(); r.init(); choix=100; }
                     img = IMG_LoadTexture(renderer,q.get_liste(i).c_str()); // charge l'image
                     if (img==NULL) std::cout<<"ERROR LOAD TEXTURE"<<std::endl;
                     SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur */
                     bonne_rep=r.get_rep(q);
                     i=q.set_num_question();//on passe  à la question suivante
              
                 }
                 else quit=true;

                break;

                case SDLK_a:
                if (r.estlaBonneRep("A",bonne_rep)) 
                {
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(0).c_str()); 
                    d.deplace(perso, true);
                    Pos=perso.get_PosPerso();
                    SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); 
                    } // faire fonction void resultat()
                else{
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(1).c_str());
                    d.deplace(perso, false);
                    Pos=perso.get_PosPerso();
                    SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); 
                }
                s.update(r.estlaBonneRep("A",bonne_rep));
                break;

                case SDLK_b:
                if (r.estlaBonneRep("B",bonne_rep))
                { 
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(0).c_str());
                    d.deplace(perso, true);
                    Pos=perso.get_PosPerso();
                    SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); } // faire fonction void resultat()
                else {
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(1).c_str());
                    d.deplace(perso, false);
                    Pos=perso.get_PosPerso();
                     SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); 
                    
                }
                s.update(r.estlaBonneRep("B",bonne_rep));

                break;
                case SDLK_c:
                if (r.estlaBonneRep("C",bonne_rep))
                {
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(0).c_str()); 
                    d.deplace(perso, true);
                    Pos=perso.get_PosPerso();
                    SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); } /// faire fonction void resultat()
                else {
                    img=IMG_LoadTexture(renderer,r.get_affiche_rep(1).c_str());
                    d.deplace(perso, false);
                    Pos=perso.get_PosPerso();
                    SDL_QueryTexture(perso.get_img_perso(), NULL, NULL,&Pos.w, &Pos.h); 
                    s.update(r.estlaBonneRep("C",bonne_rep));
                }

                 break;
                 case SDLK_s:
                 img=IMG_LoadTexture(renderer,s.get_affiche_score().c_str());
                 SDL_QueryTexture(img, NULL, NULL, &w, &h);

                 break;
                
              }
              break;
      

    }
		SDL_RenderClear(renderer);
        
        SDL_RenderCopy(renderer, img, NULL, &texr);

        if (perso.get_img_perso()) SDL_RenderCopy(renderer,perso.get_img_perso(),NULL,&Pos);
    
        SDL_RenderPresent(renderer);
        

}
	affichage.clear(wi.get_renderer(),wi.get_window(),wi.get_img());
}