#include "Question.h"
using namespace std;



	Question::Question(std::string question, std::string r1, std::string r2, std::string r3,int vraie_rep): Formulation(), _question(question),_vraie_rep(vraie_rep)
	{
		_reponses.push_back(r1);
		_reponses.push_back(r2);
		_reponses.push_back(r3);

	};

 void Question::affiche_SDL() const
 {};

 void Question::askQuestion(){

 	int choix;
	cout<<get_question()<<endl;
	std::vector<string> v=get_reponses();
	for (int i=0; i<v.size(); i++)
		cout<< i << ") " <<v[i]<<endl;

	cout<<endl;
	cout<<"Rentrez le numéro de la bonne réponse"<<endl;
	cin>>choix;
	if(choix==_vraie_rep)
		cout<<"Bien joué"<<endl;
	else cout<<"Et non! La bonne réponse était la "<<_vraie_rep<<endl;



 };