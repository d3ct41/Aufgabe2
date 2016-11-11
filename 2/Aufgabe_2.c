#include <stdio.h>
/*
 * Autor Gkaitatzis, Andreas; Brinkmann, Maximilian
 * Version 1.1
 * Datum 11.11.2016
 * 
 * Fragt den Nutzer Daten ab und stellt diese in einer Formatieren Tabelle dar.
 */

int main(int argc, char **argv)
{
	int posX1;
	int posY1;
	double temp1;
	
	int posX2;
	int posY2;
	double temp2;
	
	int posX3;
	int posY3;
	double temp3;

	printf("Bitte Position x, Position y und Temperatur eingeben!\n");
	scanf("%d %d %lf", &posX1, &posY1, &temp1);
	if ( (posX1 > 1024 || posX1 < -1024) || (posY1 > 1024 || posY1 < -1024) || (temp1 < -40 || temp1 > 85) )
	{
		printf("\n Fehler! Die Position muss im Bereich von -1024 bis 1024, die Temperatur im Bereich von -40 bis 85 liegen! \n");
	}
	
	printf("Bitte Position x, Position y und Temperatur eingeben!\n");
	scanf("%d %d %lf", &posX2, &posY2, &temp2);
	if ( (posX2 > 1024 || posX2 < -1024) || (posY2 > 1024 || posY2 < -1024) || (temp2 < -40 || temp2 > 85) )
	{
		printf("\n Fehler! Die Position muss im Bereich von -1024 bis 1024, die Temperatur im Bereich von -40 bis 85 liegen! \n");
	}
	
	printf("Bitte Position x, Position y und Temperatur eingeben!\n");
	scanf("%d %d %lf", &posX3, &posY3, &temp3);
	if ( (posX3 > 1024 || posX3 < -1024) || (posY3 > 1024 || posY3 < -1024) || (temp3 < -40 || temp3 > 85) )
	{
		printf("\n Fehler! Die Position muss im Bereich von -1024 bis 1024, die Temperatur im Bereich von -40 bis 85 liegen! \n");
	}
	
	printf("Position x | Position y | Temperatur [C]\n");
	printf("++++++++++ | ++++++++++ | ++++++++++++++\n");

	printf("%+10d | %+10d | %+07.3f\n", posX1, posY1, temp1); 
	printf("%+10d | %+10d | %+07.3f\n", posX2, posY2, temp2); 
	printf("%+10d | %+10d | %+07.3f\n", posX3, posY3, temp3); 
	
	return 0;
}

