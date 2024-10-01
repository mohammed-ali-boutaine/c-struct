#include <stdio.h>

typedef struct {
    int longueur;
    int largeur;
} Rectangle;

int calculerAire(Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {

    Rectangle r1 = {3, 5};


    printf("Aire du rectangle: %d\n", calculerAire(r1));

    return 0;
}
