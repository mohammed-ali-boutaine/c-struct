#include <stdio.h>

int main() {

    typedef struct {
        char nom[25];
        char prenom[25];
        int notes[3]; 
    } Etudiant;

    Etudiant e1 = {"Bou", "Med Ali", {18, 20, 19}};

    printf("Nom: %s, Prénom: %s, Notes: %d, %d, %d\n", e1.nom, e1.prenom, e1.notes[0], e1.notes[1], e1.notes[2]);

    return 0;
}