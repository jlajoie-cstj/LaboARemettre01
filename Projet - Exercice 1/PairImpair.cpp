// But: Trier les nombres pair/Impair 
// Auteur: Julien Lajoie
// Date: 2020-09-13


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// D�clarer la variable :
	int nb1;

	// Lancer une discution avec l'utilisateur
	std::cout << "Veuillez entrer un nombre entier :";

	// Ajouter ceci pour lire la r�ponse de l'utilisateur
	std::cin >> nb1;

	// On entre cette commande pour v�rifier dans quel cat�gorie le nombre se situe

	if (nb1 % 2 == 1) 
	{
		std::cout << nb1 << " est un nombre impair";
	}
	else
	{
		std::cout << nb1 << " est un nombre pair";
	}
	/*
		Grille de Test

		12 R�ponse = 12 est un nombre pair

		227 R�ponse = 227 est un nombre impair

		145354 R�ponse = 145354 est un nombre pair

		737271 R�ponse 737271 est un nombre impair
	*/
	// Tous fonctionne :)





}