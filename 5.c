#include <stdio.h>
#include <string.h>  

typedef struct {
    char titre[25];
    char auteur[25];
    char annee[10];
} Livre;

Livre creerLivre(char titre[], char auteur[], char annee[]) {
    
    Livre l1;
    strcpy(l1.titre, titre);
    strcpy(l1.auteur, auteur);
    strcpy(l1.annee, annee);
    return l1;
}

int main() {

    Livre livre = creerLivre("Book Title", "Ali B", "2024");

    printf("Titre: %s, Auteur: %s, Année: %s\n", livre.titre, livre.auteur, livre.annee);

    return 0;
}
