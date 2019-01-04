#pragma once

class Personnage{
 public :
	Personnage ();
	Personnage(std :: string name )
	~Personnage(){};
	void choisir_personnage(int &a); 
 private:
	int _score;
}