#include "Score.hh"

Score::Score()
{
	nb_score=0;
	set_liste("./IMAGE/Score_0-4.jpg");
	set_liste("./IMAGE/Score_5-7.jpg");
	set_liste("./IMAGE/Score_8-10.jpg");
    
    
};
	
void Score::update(bool estlaBonneRep)
{
	if(estlaBonneRep) nb_score++;
};

std::string Score::get_affiche_score()
{
    if (nb_score>=0 && nb_score <=4) return get_liste(0); 
    if (nb_score>=5 && nb_score <=7) return get_liste(1);
    return get_liste(2);
}
