#include "Window.hpp"

Window::Window():_win(NULL),_renderer(NULL),_img(NULL),_l(935),_h(520),_screen_name("BOB GAME "),_PATH("./IMAGE/Acceuil.jpg"){} // constructeur par défaut

Window::Window(SDL_Window *win,SDL_Renderer *renderer,SDL_Texture *img,int l,int h,const std::string screen_name,std::string PATH):_win(win),_renderer(renderer),_img(img),_l(l),_h(h),_screen_name(screen_name),_PATH(PATH){} //contructeur qui initialise les éléments d'affichage

Window ::~Window()
{
    // pour l'allocation dynamique
    SDL_DestroyTexture(_img);
    SDL_DestroyRenderer(_renderer);
    SDL_DestroyWindow(_win);
}

