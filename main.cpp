#include <iostream>
#include <string>

int main()
{
	std::cout << "******************************************************************************************\n*  Ceci est un programme pour connaitre et apprendre les arcanes du Tarot de Marseille.  *\n*            La version actuelle ne prend en charge que les arcanes majeures.            *\n******************************************************************************************" 
	<< std::endl;

	std::cout << "Choix de l'Arcane Majeure.\n";

	int number;

	do {
		std::cout << "Veuillez entrer un nombre entre 0 et 21\n";
		std::cin >> number;
		if (number > 21)
			{
				std::cout << "Vous avez saisi " << number << ". Cette arcane majeure n'existe pas.\n" << std::endl;
			}
		}
	while (number > 21);

	std::cout << "Arcane choisie : " << number << std::endl;

	return 0;
}
