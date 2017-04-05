/* my SECOND C-script :3 */
#include <stdio.h>
#include <math.h>

int main(){
	// Hello World
	printf("Hello World!\n");

	// Print a Number
	int number;
	number = 1337;
	printf("Value: %d\n",number);

	// Calculate how much energy it takes to fetch a coffee
	float watt,
		geschwindigkeit,
		masse = 90,
		weg = 25,
		zeit = 50;
	geschwindigkeit = weg / zeit;
	watt =(float) masse * (geschwindigkeit * geschwindigkeit) / 2;
	watt =(float) watt / geschwindigkeit;
	printf("Kaffeeholen verbraucht %f Watt.\n", watt);

	// Calculate how much faster it would be by going str8
	double length = 15,
		height = 10,
		alter_weg = 25;
	double str8 = sqrt(length*length + height*height);
	printf("the new way is %lf m long.\n",str8);
	printf("Ersparnis: %lf m.\n",str8 - alter_weg);

	// Wer wird Millionär?
	float bookprice = 15.95;
	float percent = bookprice * 0.05;
	int books = 1000000 / percent + 1;
	printf("The author has to sell %d books to become a millionaire.\n",books);

	// Tangens
	float tang = tan(1.093);
	printf("The tan of 1.093 is %f.\n",tang);

	// Bugfix
	char z1 = 'W',
		z2 = 'X',
		z3 = 66;
	printf("z1 = %c\nz2 = %c\nz3 = %c\n",z1,z2,z3);

	// Various Codations
	int wert = 100;
	printf("Dezimale Darstellung    : %d\n",wert);
	printf("Oktale Darstellung      : %o\n",wert);
	printf("Hexadezimale Darstellung: %x\n",wert);
	printf("ASCII-Darstellung       : %c\n",wert);	
	printf("Binäre Darstellung	: %b\n",wert);
	float val = 123.1234;
	printf("Fließkomma  : %f\n",val);
	printf("Exponentiell: %e\n",val);
	printf("Kompakt     : %g\n",val);

	// Input & Output
	int x,y;
	printf("Geben sie 10 ein: ");
	scanf("%d",&y);
	printf("Und eine andere nette Zahl, bitte: ");
	scanf("%f",&x);
	printf("--|%10d|--%c",x,y);
	printf("--|%010d|--%c",x,y);
	printf("--|%-10d|--%c",x,y);

	// Coffee World Cup
	float volumen, innen, hoehe, pi = 3.14;
	printf("Innendurchmesser der Tasse (cm): ");
	scanf("%f",&innen);
	printf("Hoehe der Tasse (cm)): ");
	scanf("%f",&hoehe);
	volumen = innen * innen * pi / 4 * hoehe;
	printf("In die Tasse passen %.2f ml Kaffe.\n",volumen);

return 0;
}
