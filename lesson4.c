#include <stdio.h>

float durchschnitt(int tag[], int length) {
    int i, gesamt = 0;
    for (i = 0;i < length;i++) {
        gesamt += tag[i];
    }
    float medium = gesamt / i;
return medium;
}

int namen() {
    char name[60];
    printf("Wie heißen sie? ");
    fgets(name,60,stdin);

    printf("Hallo, %s",name);


return 0;
}

int main() {
    int length;
    printf("Wie lang ist der Zeitraum? ");
    scanf("%d",&length);
    int tag[length];
    int i;
    for (i=0;i<length;i++) {
        printf("Temperatur für Tag %3d: ",i+1);
        scanf("%d",&tag[i]);
    }
    printf("Temperatur von welchem Tag? ");
    scanf("%d",&i);
    if (i <= length) {
        printf("Temperatur am Tag %d: %d Kelvin.\n",i,tag[i-1]);
    }
    float medium = durchschnitt(tag,length);
    printf("Die Durchschnittstemperatur in dem Zeitraum beträgt %.2f Kelvin.\n",medium);
    getchar();

    namen();
return 0;
}
