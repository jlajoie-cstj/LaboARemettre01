//But : 

// Auteur :

// Date : 2020-09-13

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int entier;

	std::cout << "Veuillez entrer un entier à 5 chiffres : ";
	std::cin >> entier;

	// On vérifie que le nombre a bien 5 chiffres. On commence par les cas qui ne fonctionnent pas
	if (entier < 10000)
	{
		std::cout << entier << " ne contient pas 5 chiffres .";
		return 5;
	}
	else
	{
		if (entier > 99999)
		{
			std::cout << entier << " ne contient pas 5 chiffres .";
		}
		else
		{
			std::cout << entier << " est bien un nombre à 5 chiffres.";
		}
	}

	// Si on est ici dans le code, alors le nombre a bien 5 chiffres
	// On peut le décomposer
	// 12345 : 1 * 10 000
	std::cout << std::endl << entier / 10000;
	std::cout << std::endl << entier % 10000 / 1000;
	std::cout << std::endl << entier % 1000 / 100;
	std::cout << std::endl << entier % 100 / 10;
	std::cout << std::endl << entier % 10;

	return 0;

}