#pragma once
#include "Reponse.hh"
#include<vector>

/* La classe Score hérite de Reponse et comptabilise le nombre de bonnes réponses données.
 Elle permettra aussi de donner le chemin vers l'image qui indiquera au joueur son score.
 */

class Score:Reponse
{
public:
	Score();
	~Score(){};
	void update(bool estlaBonneRep); // Si la réponse est bonne, on incrémente
	std::string get_affiche_score(); // On retourne le chemin vers l'image du score
	int get_nb_score(){return nb_score;}

private:
	int nb_score;
	
};
