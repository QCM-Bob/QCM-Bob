#pragma once
#include "Reponse.hh"
//#include<vector>

class Score:Reponse
{
public:
	Score();
	~Score(){};
	void update(bool estlaBonneRep);
	//std::string get_affiche_score();
	int get_nb_score(){return nb_score;}

private:
	int nb_score;
	//std::vector<std::string> affiche_score;
	
};