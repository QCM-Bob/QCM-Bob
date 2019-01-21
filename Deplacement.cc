#include "Deplacement.hh"

// Le personnage est placé dans un coin précis de la fenêtre 
 void Deplacement::init(Personnage &p)
{
	//on prend ici le coin du bas sur l'image d'acceuil 
	p.set_PosPerso_x(50);
	p.set_PosPerso_y(400);
	p.set_PosPerso_w(25);
	p.set_PosPerso_h(25);



};

//cette fonction permet de deplacer le personnage , le personnage se déplace à droite si sa réponse est bonne, à gauche sinon
void Deplacement::deplace(Personnage &p, bool b)
{
	SDL_Rect  tmp=p.get_PosPerso();
	if(tmp.x>=50 && tmp.x<850)
	{
		if(b)		p.set_PosPerso_x(tmp.x+75);
        else {
            if(tmp.x>50)		p.set_PosPerso_x(tmp.x-75);
	}
    }
    else std::cout<<"Hors du champ"<<std::endl;
};
