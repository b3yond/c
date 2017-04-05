#include <stdio.h>
#include <math.h>

float pi = 3.1415;

void fun1() {
printf("Ich bin eine sinnlose Funktion\n");
}

float kreis_area(float r) {
    float flaeche = r * r * pi / 4;
    return flaeche;
}

float kreis_durchmesser (float r) {
    float durchmesser = 2 * sqrt( 4 * kreis_area(r) / pi);
    return durchmesser;
}

float kreis_umfang (float r) {
    float umfang = kreis_durchmesser(r) * pi;
    return umfang;
}

int main() {

//Funktionen:
//fun1();

float r;
printf("Welchen Radius hat der Kreis?\n");
scanf("%f",&r); getchar();

int bedingung;
char modus;
float result;
while (1) {
    printf("Was willst du berechnen?\n1: Fläche\n2: Durchmesser\n3: Umfang\n4: Programm beenden\nDeine Eingabe: ");
    scanf("%d",&bedingung); getchar(); fflush(stdin);
    switch (bedingung) {
        case 1: 
            result = kreis_area(r); 
            modus="Fläche";  // BUG
                break;
        case 2: 
            result = kreis_durchmesser(r); 
            modus="Durchmesser";  //BUG
                break;
        case 3: 
            result = kreis_umfang(r); 
            modus="Umfang";  // BUG
                break;
        case 4: break;
        default: 
            printf("Wrong Input. Try again!\n");
            bedingung = 5;
    }
    if (bedingung == 4) {
        break;
    } else if (bedingung == 5) {
    } else {
        printf("%c des Kreises ist %.2f cm/cm².\n",modus,result);
    }
} 

printf("Valar Morghulis.\n");
return 0;
}
