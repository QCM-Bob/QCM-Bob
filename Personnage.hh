#pragma once

class Personnage{
 public :
	Personnage ();
	Personnage(std :: string name )
	~Personnage(){};
	void choisir_personnage(int &a); 
	void add_energy(int s){ _score += s;}
	int energy()const{return _energy;}



 private:
	int _energy;
}