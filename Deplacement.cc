#include "Deplacement.hh"

 void Deplacement::init(Personnage &p)
{
	p.set_PosPerso_x(50);
	p.set_PosPerso_y(450);
	p.set_PosPerso_w(40);
	p.set_PosPerso_h(40);



};


void Deplacement::deplace(Personnage &p, bool b)
{
	SDL_Rect  tmp=p.get_PosPerso();
	if(tmp.x>50|| tmp.x<850)
	{
		if(b)		p.set_PosPerso_x(tmp.x+50);
		else  		p.set_PosPerso_x(tmp.x-50);
	}

};
