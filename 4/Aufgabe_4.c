#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * Autor Gkaitatzis, Andreas; Brinkmann, Maximilian
 * Version 1.1
 * Datum 11.11.2016
 * 
 * Raten einer Zufallszahl
 */

int main(int argc, char **argv)
{
	int zufallsZahl;
	int nutzerZahl;
	
	srand ( time ( NULL ));
	zufallsZahl = rand ()%20 + 21;

	do
	{
		printf("Rate eine Zahl zwischen 1 und 10!\n");
		scanf("%d", &nutzerZahl);
		
		if(zufallsZahl == nutzerZahl)
		{
			 printf("Glueckwuensch! Das war die richtige Zahl\n");
		}
		else if(zufallsZahl < nutzerZahl)
		{
			printf("Leider um %d zu hoch...\n", (nutzerZahl - zufallsZahl));
		}
		else if(zufallsZahl > nutzerZahl)
		{
			printf("Leider um %d zu niedrig...\n", (zufallsZahl - nutzerZahl));
		}
		else
		{
			printf("Zwischen 1 und 10, Deep...\n");
		}
	}while(zufallsZahl != nutzerZahl);
	
	return 0;
}

