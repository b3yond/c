#include <stdio.h>

int main(){
	int i, gzahl;
	
	// nicht immer das gleiche, lol.
	char skip;
	printf("Want to skip? [Y/n] ");
	scanf("%c",&skip);
	getchar();
	if (skip == 'n') {

	// Beispiel der formatierten Eingabe mit scanf
	int ganzzahl;
	float fliesszahl;
	printf("      Bitte geben sie eine Ganzzahl ein: ");
	scanf("%5d",&ganzzahl);
	getchar();
	printf("%c",ganzzahl);
	printf("Bitte geben sie eine Fließkommazahl ein: ");
	scanf("%f",&fliesszahl);
	printf("%c",fliesszahl);
	printf("%d : %.2f\n",ganzzahl,fliesszahl);

	// Übungsaufgabe 115
	int zahl1, zahl2;
	printf("Bitte geben sie eine Zahl ein : ");
	scanf("%d",&zahl1);
	getchar();
	printf("%c",zahl1);
	printf("Bitte geben sie eine Zahl ein : ");
	scanf("%d",&zahl2);
	printf("%c",zahl2);
	printf("Summe beider Zahlen : %d\n",zahl1+zahl2);

	int art,anzahl;
	float preis;
	art = 123878;
	anzahl = 1;
	preis = 0.999;
	printf("Artikelnummer             Anzahl       Preis\n");
	printf("%013d             %6d        %.2f\n",art,anzahl,preis);

	char c;
	printf("Eine Ganzzahl : ");
	scanf("%d",&art);
	printf("Eine Fliesskommazahl bitte: ");
	scanf("%f",&preis);
	printf("und jetzt noch ein Zeichen: ");
	getchar();
	scanf("%c",&c);
	getchar();
	printf("Sie gaben ein: %d\n%f\n%c\n",art,preis,c);

	// if-clause ftw
	printf("Geben sie bitte eine Zahl ein: ");
	getchar();
	scanf("%d",&gzahl);
	printf("%c",gzahl);
	if (gzahl < 50) {
		printf("\nZahl ist kleiner als 50.\n");
	} else if (gzahl == 50) {
		printf("\nZahl ist gleich 50.\n");
	} else {
		printf("\nZahl ist größer als 50.\n");
	}
	printf("Programmende \\o/\n");
	
	printf("1-6.\n");
	scanf("%d",&gzahl);
	switch (gzahl) {
	case 1: printf("Mother\n");	break;
	case 2: printf("Brother\n");	break;
	case 3: printf("Father\n");	break;
	case 4: printf("Son\n");	break;
	case 5: printf("Sister\n");	break;
	case 6: printf("Daughter\n");	break;
	default: printf("%d is a wrong input.\n",gzahl);
	}

	// Einmaleins printen!
	int j = 1;
	i = 1;
	printf("X nach unten, Y nach rechts. yay!\n");
	while ( i < 11 ) {
		printf("%2d : ",i);
		j = 1;
		while ( j < 11 ) {
			printf("%3d ",j*i);
		j++;
		}
	printf("\n");
	i++;
	}

	// Milchtütten
	int d = 8, hoehe = 16;
	float volumen, pi = 3.1415;
	while ( hoehe <= 24 ) {
		volumen =(float) d*d*pi/4*hoehe;
		printf("Höhe: %d cm=%.2f ml\n",hoehe,volumen);
		hoehe++;
	}
	
	for (i = 0; i <= 5; i++) { 
		printf("Solange %d kleiner als 5 ist, ist alles gut.\n",i);
	}


	// add all straight numbers from 0 to 20
	i = 1;
	gzahl = 0;
	while ( i <= 20 ) {
		if ( i % 2 ) {
			i++;
			continue;
		}
		gzahl += i;
		i++;
	}
	printf("Ergebnis: %d\n",gzahl);

	} // SKIP SKIP SKIP SKIP SKIP SKIP

	//Übungsaufgaben
	int x;
	printf("Geben sie eine Ganzzahl ein: ");
	scanf("%d",&x);
	if(x <= 100) {
		printf("Sorry, der Wert ist zu klein!!!\n");
	} else if (x==200) {
		printf("Du hast den Wert 200 eingegeben!\n");
	} else if (x>1000) {
		printf("Der Wert ist zu grooooß.\n");
	} else {
		printf("Danke für den SCHWANZ.\n");
	}

	

return 0;
}
