#include <stdio.h>
#include <stdlib.h>

char name[80],
     string[100] = {"Hallo"},
     names[80] = {""};

float durchschnitt(int tag[], int length) {
    int i, gesamt = 0;
    for (i = 0;i < length;i++) {
        gesamt += tag[i];
    }
    float medium = gesamt / i;
return medium;
}

int namen() {
    int size;
    printf("Wie heißen sie? ");
    fgets(name, 80, stdin);
    strcat(names, name);
    strcat(string, " ");
    strcat(string, name);
    size=strlen(string);
    if (size < 99) {
        printf("Tell us more about you!\n\n> ");
        fgets(name, 99-size, stdin);
        strcat(string,name);
    }
    printf("\n%s",&string);
return 0;
}

int compare() {
    char pass[] = {"asdf1234"},
         password[8];

    printf("Insert password: ");
    scanf("%s",&password[0]);
    
    if ( !strcmp(pass, password)) {
        printf("Welcome, %s",&names);
    } else {
        printf("Access denied.");
    }
return 0;
}

int groesse() {  // wtf, this function is broken. how do arrays work? o.0
    int i = 10,
        fav,
        j;
    char nums[i];

    for (j=0;j<i;j++) {
        printf("Gib mir eine Zahl: ");
        scanf("%d",&nums[j]);
        printf("%d",nums[j]);
    }
    fav = nums[0];
    for (j=0;j<i;j++) {
        if (nums[j] > fav) {
            fav = nums[j];
        }
    }
    printf("Die höchste Zahl davon ist die %d.",fav);
    
return 0;
};

int main() {
    int length,
        jahr=2015;
    printf("%x\n",jahr);
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
    compare();
    groesse();
return 0;
}
