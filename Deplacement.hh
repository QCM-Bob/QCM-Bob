#pragma once 
#include<iostream>
#include<string>
#include "Personnage.hh"




class Deplacement
{
public:
	Deplacement(){};
	~Deplacement(){};
	virtual void init(Personnage &p);
	void deplace(Personnage &p, bool b);
	
};