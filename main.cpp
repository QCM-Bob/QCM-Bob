#include"Question.h"
#include<string>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout << "------------------------- JEU QUIZZ---------------------------"<<endl;
	cout<<endl;
	cout<<"     Bienvenue au jeu programmé par Soum et Esra"<<endl;
	cout<<"     Le but est simple, répondre aux questions  "<<endl;
	cout<<"     Le principe est le suivant   "<<endl;
	cout<<"     Après la question, tapez le numéro de la réponse choisie     "<<endl;
	cout<<"     Bonne chance!      "<<endl;
	cout<<endl;
	cout << "------------------------- JEU QUIZZ---------------------------"<<endl;
	cout<<endl;
	/*Question q1("Comment s'appelle la ville où habite Bob ?", "Bikini Bossom", "Bikini Tossom", "Bikini Bottom",2);
	Question q2("Qui sont les voisins de Bob ?", "Patrick et Carlo", "Carlo et Sandy", "Pearl et Plankton",0);
	Question q3("De quelle forme sont les nuages ?", "En forme de fleur", "En forme d'étoile", "En forme de nuage tout simplement",0);
	Question q4("De quelle couleur est la cravate de Bob ?", "Rouge", "Bleue", "Verte",0);


	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();*/
	Question q;
	q.init();




}

// Il faut qu'on voit comment on sait qu'elle est la bonne réponse càd faut que choix r1 égale reponses