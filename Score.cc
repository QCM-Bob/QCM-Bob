#include "Score.hh"

Score::Score()
{
	nb_score=0;
    affiche_score.push_back("./IMAGE/Score_0-4.jpg");
    affiche_score.push_back("./IMAGE/Score_5-7.jpg");
    affiche_score.push_back("./IMAGE/Score_8-10.jpg");
    
};
	
void Score::update(bool estlaBonneRep)
{
	if(estlaBonneRep) nb_score++;
};

std::string Score::get_affiche_score()
{
    if (nb_score>=0 && nb_score <=4) return affiche_score[0];
    if (nb_score>=5 && nb_score <=7) return affiche_score[1];
    return affiche_score[2];
}
