#include <iostream>
#include <stdio.h>
#include <string>
#include "cVect2D.h"

int main() {
	cVect2D v1;
	cVect2D v2(1.0f);
	cVect2D v3(&v1);

	//Affiche le vecteur avant la fonction de set
	std::cout << "v1 " << v1.ToString() << std::endl;
	v1.setVectX(2.0);
	v1.setVectY(3.0);
	//Affiche le vecteur après la fonction de set
	std::cout << "v1 " << v1.ToString() << std::endl;

	//Affiche le vecteur avant la fonction de set
	std::cout << "v2 " << v2.ToString() << std::endl;
	v2.setVectX(4.0);
	v2.setVectY(1.0);
	//Affiche le vecteur après la fonction de set
	std::cout << "v2 " << v2.ToString() << std::endl;

	//Affiche le vecteur avant la fonction de set
	std::cout << "v3 " << v3.ToString() << std::endl;
	v3.setVectX(4.0);
	v3.setVectY(1.0);
	//Affiche le vecteur après la fonction de set
	std::cout << "v3 " << v3.ToString() << std::endl << std::endl;

	//Addition
	std::cout << "Add:" << std::endl;
	std::cout << "v1 " << v1.ToString() << std::endl;
	std::cout << "v2 " << v2.ToString() << std::endl;
	v1.Add(v2);
	std::cout << "v1 " << v1.ToString() << std::endl << std::endl;

	//Soustraction
	std::cout << "Sub:" << std::endl;
	std::cout << "v1 " << v1.ToString() << std::endl;
	std::cout << "v2 " << v2.ToString() << std::endl;
	v1.Sub(v2);
	std::cout << "v1 " << v1.ToString() << std::endl << std::endl;

	//Multiplication
	std::cout << "Multi:" << std::endl;
	std::cout << "v1 " << v1.ToString() << std::endl;
	std::cout << "v2 " << v2.ToString() << std::endl;
	v1.Multi(v2);
	std::cout << "v1 " << v1.ToString() << std::endl << std::endl;

	//Multiplication par un réel
	std::cout << "Multi par reel:" << std::endl;
	std::cout << "v1 " << v1.ToString() << " x 2" << std::endl;
	v1.Multi(2.0f);
	std::cout << "v1 " << v1.ToString() << std::endl << std::endl;

	//Scalaire
	std::cout << "Scalar Product:" << std::endl;
	std::cout << "v1 " << v1.ToString() << std::endl;
	std::cout << "v2 " << v2.ToString() << std::endl;
	std::cout << "Scalar : " << v1.ScalarProduct(v2) << std::endl << std::endl;

	//Norme
	std::cout << "Norm Product:" << std::endl;
	std::cout << "v1 " << v1.ToString() << std::endl;
	std::cout << "v2 " << v2.ToString() << std::endl;
	std::cout << "Norm : " << v1.NormProduct(v2) << std::endl << std::endl;

	//Fin du programme
	system("pause");
	return 0;
}