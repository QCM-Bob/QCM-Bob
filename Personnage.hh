#pragma once

class Personnage{
 public :
	Personnage ();
	Personnage(std :: string name )
	~Personnage(){};
 private:
	uint16_t _nrj;
	int _score;
}