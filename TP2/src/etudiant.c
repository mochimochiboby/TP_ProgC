#include <stdio.h>

#include <stdio.h>

// Structure pour les étudiants
struct etudiants {
    char nom[50];    // Tableau de caractères pour le nom 
    char prenom[50]; // Tableau de caractères pour le prénom 
    int idEtudiant;  // ID de l'étudiant
} etudiants[5] = {
    {"Dupont", "Alice", 1},
    {"Martin", "Bob", 2},
    {"Bernard", "Claire", 3},
    {"Lemoine", "David", 4},
    {"Moreau", "Eva", 5}
};

// Structure pour les adresses
struct adresses {
    int idEtudiant;  // ID de l'étudiant
    int numero;      // Numéro de la rue    
    char nomrue[50]; // Nom de la rue
    int codepostal;  // Code postal    
    char ville[50];  // Nom de la ville
} adresses[5] = {
    {1, 10, "Rue de la Paix", 75001, "Paris"},
    {2, 15, "Avenue des Champs-Elysées", 75008, "Paris"},
    {3, 20, "Rue de la République", 69002, "Lyon"},
    {4, 5, "Boulevard Saint-Germain", 75005, "Paris"},
    {5, 8, "Rue de la Liberté", 44000, "Nantes"}
};

// Structure pour les notes
struct notes {
    int idEtudiant;  // ID de l'étudiant
    int notemod1;    // Note module 1
    int notemod2;    // Note module 2
} notes[5] = {
    {1, 15, 12},  // Alice : Notes module 1 = 15, module 2 = 12
    {2, 10, 14},  
    {3, 18, 17},  
    {4, 12, 11},  
    {5, 14, 16}   
};



int main() {
    // Affichage des informations des étudiants, de leurs adresses et de leurs notes
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d : %s %s\n", etudiants[i].idEtudiant, etudiants[i].prenom, etudiants[i].nom);
        printf("Adresse : %d %s, %d, %s\n", adresses[i].numero, adresses[i].nomrue, adresses[i].codepostal, adresses[i].ville);
        printf("Notes : Module 1 = %d, Module 2 = %d\n\n", notes[i].notemod1, notes[i].notemod2);
    }

    return 0;
}
