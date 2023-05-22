#include <iostream>
#include <string>
#include <map>

std::string signification(int number) {
    std::map<int, std::string> mapping = {
        {0, "le mat, ou le fou."},
        {1, "le batteleur."},
        {2, "la papesse."},
        {3, "l'imperatrice."},
        {4, "l'empereur."},
        {5, "le pape."},
        {6, "l'amoureux."},
        {7, "le chariot."},
        {8, "l'amoureux."},
        {9, "l'hermite."},
        {10, "la roue de fortune."},
        {11, "la force."},
        {12, "le pendu."},
        {13, "l'arcane sans nom."},
        {14, "la temperance."},
        {15, "le diable."},
        {16, "la maison dieu."},
        {17, "l'etoile."},
        {18, "la lune."},
        {19, "le soleil."},
        {20, "le jugement."},
        {21, "le monde."},
    };
    if (mapping.find(number) != mapping.end()) {
        return mapping[number];
    } else {
        return "Chiffre non reconnu";
    }
}

int main()
{
    std::cout << "  ________________________________________________________________________________________  \n /  Ceci est un programme pour connaitre et apprendre les arcanes du Tarot de Marseille.  \\ \n |            La version actuelle ne prend en charge que les arcanes majeures.            | \n \\________________________________________________________________________________________/ " 
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

    std::string texte = signification(number);
    std::cout << "Vous avez choisi l'arcane " << number << ", " << texte << std::endl;
    std::cout << "Fin du programme" << std::endl;

    return 0;
}
