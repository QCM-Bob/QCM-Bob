#include"Question.h"
#include"Reponse.hh"
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
	
	Question q;
	q.init();
	Reponse r;
	r.init();
	std::string r0=r.get_rep(q);
	std::cout<<r0<<std::endl;



}

// Il faut qu'on voit comment on sait qu'elle est la bonne réponse càd faut que choix r1 égale reponses