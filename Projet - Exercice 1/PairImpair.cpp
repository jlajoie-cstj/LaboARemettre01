// KM : Pourquoi trier ??? But: Trier les nombres pair/Impair 
// Auteur: Julien Lajoie
// Date: 2020-09-13


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// Déclarer la variable :
	int nb1;

	// FR : Lancer une discution avec l'utilisateur
	std::cout << "Veuillez entrer un nombre entier :";

	// Ajouter ceci pour lire la réponse de l'utilisateur
	std::cin >> nb1;

	// FR : On entre cette commande pour vérifier dans quel catégorie le nombre se situe
	// KM : Explique pourquoi tu as recours au modulo et pourquoi tu le compares à 1
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

		12 Réponse = 12 est un nombre pair

		227 Réponse = 227 est un nombre impair

		145354 Réponse = 145354 est un nombre pair

		737271 Réponse 737271 est un nombre impair
	*/
	// Tous fonctionne :)





}
