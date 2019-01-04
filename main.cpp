#include"Question.h"
#include"Reponse.hh"
#include"Affiche.hh"
#include"Window.hh"
#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_image.h> //contenu dans la bibliothèque SDL2
#include<string>
#include<iostream>
using namespace std;
#define IMG_PATH "./IMAGE/Acceuil.jpg"
#define WIDTH 935
#define HEIGHT 520




int main(int argc, char const *argv[])
{

	/*cout << "------------------------- JEU QUIZZ---------------------------"<<endl;
	cout<<endl;
	cout<<"     Bienvenue au jeu programmé par Soum et Esra"<<endl;
	cout<<"     Le but est simple, répondre aux questions  "<<endl;
	cout<<"     Le principe est le suivant   "<<endl;
	cout<<"     Après la question, tapez le numéro de la réponse choisie     "<<endl;
	cout<<"     Bonne chance!      "<<endl;
	cout<<endl;
	cout << "------------------------- JEU QUIZZ---------------------------"<<endl;
	cout<<endl;
	*/

	SDL_Window *win = NULL; // crée la fenetre
    SDL_Renderer *renderer = NULL;
    SDL_Texture *img = NULL; // pour l'image
    

	 Window wi(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpg");
    
    Affiche premiere_image(win,renderer,img,935,520,"Bob L'éponge","./IMAGE/Acceuil.jpg");

    int w=wi.get_l();
    int h=wi.get_h();

    win = SDL_CreateWindow("Projet Bob L'éponge", 100, 100, WIDTH, HEIGHT, 0); // cree la fenetre
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED); // cree le renderer
    
    
    img = IMG_LoadTexture(renderer, IMG_PATH); // charge l'image
    
    SDL_QueryTexture(img, NULL, NULL, &w, &h); // recuperer la longueur et largeur
    SDL_Rect texr; texr.x = 12; texr.y = HEIGHT/70; texr.w = w*1.2; texr.h = h*1.2; // donne les dimensions de l'image

    bool quit = false;


	/*Question q;
	q.init();
	Reponse r;
	r.init();
	std::string r0=r.get_rep(q);
	std::cout<<r0<<std::endl; */

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

         }
	
        }




}

// Il faut qu'on voit comment on sait qu'elle est la bonne réponse càd faut que choix r1 égale reponses