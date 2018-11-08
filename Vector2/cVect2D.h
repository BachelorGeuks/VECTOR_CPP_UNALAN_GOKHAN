#pragma once
#include <math.h>
#include <string>

#ifndef cVect2D_H_INCLUDED
#define cVect2D_H_INCLUDED

class cVect2D {
	private:	//accessible dans la classe et seulement dans la classe.
		float mf_x;	//variable X
		float mf_y; //variable Y

	protected:	//accessible dans la classe et depuis les parents.
	public:	//accessible de partout.
		cVect2D();	//Constructeur sans param�tre
		cVect2D(cVect2D*); //Constructeur avec param�tre
		cVect2D(float,float = 1.0); //Constructeur avec param�tre et par d�fault

		float getVectX() const;	//retourne une variable X float d'un vecteur
		float getVectY() const;	//retourne une variable Y float d'un vecteur
		void setVectX(float = 0.0);	//initialise une variable X float d'une vecteur
		void setVectY(float = 0.0); //initialise une variable Y float d'une vecteur

		void Add(cVect2D);	//Additionne deux vecteurs
		void Sub(cVect2D);	//Soustrait deux vecteurs
		void Multi(cVect2D);	//Multiplie deux vecteurs
		void Multi(float);	//Multiplie un vecteur par un float
		float ScalarProduct(cVect2D);	//Produit scalaire de deux vecteurs
		float NormProduct(cVect2D);	//Norme de deux vecteurs

		std::string ToString()const; //Fonction d'affichage d'un vecteur
};

#endif // !cVect2D_H_INCLUDED