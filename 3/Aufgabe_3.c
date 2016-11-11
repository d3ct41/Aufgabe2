#include <stdio.h>
#include <math.h>
/*
 * Autor Gkaitatzis, Andreas; Brinkmann, Maximilian
 * Version 1.1
 * Datum 11.11.2016
 * 
 * Gibt die Nullstellen einer Quadratische Funktion
 */

int main(int argc, char **argv)
{
	double a;
	double b;
	double c;
	double x1;
	double x2;
	
	printf("Bitte Faktoren a,b und c eingeben:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if ((a == 0) && (b != 0))
	{
		printf("Es gibt eine Loesung fuer die Gleichung: ");
		x1 = -c / b;
		printf("%.2lf \n", x1);
	}
	else if ((a == 0) && (b == 0)) printf("Es gibt keine Losung fuer die Gleichung.\n");
	else 
	{
		int radikant = (b*b)- 4*a*c;
		if(radikant < 0 )
		{
			printf("Es gibt keine Loesung fuer diese Gleichnung.\n");
		}
		else if(radikant == 0 )
		{
			printf("Es gibt eine Loesung fuer die Gleichung: ");
			x1 = -b/(2*a);
			printf("%.2lf \n", x1);
		}
		else
		{
			printf("Es gibt zwei Loesungen fuer die Gleichung: ");
			x1 = (-b + sqrt(radikant))/2*a;
			x2 = (-b - sqrt(radikant))/2*a;
			printf("%.2lf %.2lf \n", x1, x2);
		}
	}
	return 0;
}

