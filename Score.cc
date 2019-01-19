#include "Score.hh"

Score::Score()
{
	nb_score=0;
};
	
void Score::update(bool estlaBonneRep)
{
	if(estlaBonneRep) nb_score++;
};