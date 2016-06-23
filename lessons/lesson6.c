#include <stdio.h>
#include <string.h>

struct lagerverwaltung {
    long id;
    char beschreibung[100];
    int anzahl;
};


int main() {
    struct lagerverwaltung artikel;
    artikel.id = 123456;
    strcpy(artikel.beschreibung,"Kaffeedose");
    artikel.anzahl = 10;

    printf("Artikelnummer: %1d\nArtikel:       %s\nAnzahl:        %d\n",artikel.id, artikel.beschreibung, artikel.anzahl);
return 0;
}
