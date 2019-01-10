
#include "Affiche.hh"
#define IMG_PATH "./IMAGE/Acceuil.jpg"

Affiche::Affiche():Window(){}


Affiche::Affiche(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name, std::string PATH):Window(win,renderer,img,l,h,screen_name,PATH){}


int Affiche::Init(Window* window)
{

    int WIDTH=window->get_l();
    
    int HEIGHT=window->get_h();
    SDL_Window* win=window->get_window();
    SDL_Renderer* renderer=window->get_renderer();
    SDL_Texture* img=window->get_img();
    

    // initialise video
        std::cout << "SDL Initialisation" << std::endl;
        if( SDL_Init( SDL_INIT_VIDEO ) < 0)
        {
            std::cout << "Unable to set video mode: " << SDL_GetError() << std::endl;
            exit(-1);
        }
    
    // cree la fenetre pour récupérer le str
    win = SDL_CreateWindow(window->get_screen_name().c_str(), 100, 100, WIDTH, HEIGHT, 0); 

    if( win == NULL )
        {
            std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << "\n" << std::endl;
        }
        else
        {

            //Create renderer for window
            renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
            if( _renderer == NULL )
            {
                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
            } else {
                //Initialize renderer color
                SDL_SetRenderDrawColor( _renderer, 0xFF, 0xFF, 0xFF, 0xFF );

                printf( "Renderer OK \n" );


            }

        }
    
    // charger l'image
    img = IMG_LoadTexture(renderer,window->get_path().c_str());
    SDL_QueryTexture(img, NULL, NULL,&WIDTH, &HEIGHT);
   

    return 0;
}


Affiche::~Affiche(){}

void Affiche::destruction(SDL_Renderer* renderer,SDL_Window* win,SDL_Texture* img)
{
    // pour détruire toutes les fenetres, normalement devraient être dans le déstructeur on verra ça après
    SDL_DestroyTexture(img);
    SDL_DestroyRenderer(renderer);
    renderer =NULL ;
    SDL_DestroyWindow(win);
    //Quit SDL subsystems
    SDL_Quit();

}



