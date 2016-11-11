#include <stdio.h>
#include <stdbool.h>
/*
 * Autor Gkaitatzis, Andreas; Brinkmann, Maximilian
 * Version 1.1
 * Datum 11.11.2016
 * 
 * Logische Ausdrücke und deren Verkettung
 */

int main(int argc, char **argv)
{
	//Variabeln deklarieren und Initalisieren
	int i = 0;
	int j = 0;
	int k = 0;
	bool b = true;
	bool c = false;
	bool d = true;
	
	printf("Bitte Werte eingeben:\n");
	printf(" i = ");
	scanf("%d", &i);
	printf(" j = ");
	scanf("%d", &j);
	printf(" k = ");
	scanf("%d", &k);
	
	//If-Abfrage mit Verschachtelten Parametern
	if((i != 0) && (j != 0) && (k != 0)) printf("Erste Bedingung erfuellt.\n");
	
	if((i > 0) && (i%17 == 0)) printf("Zweite Bedingung erfuellt.\n");
	
	if(((j < 40) && (j > 20) && (j%2 == 1))) printf("Dritte Bedingung erfuellt.\n");
	
	if( (k%5 == 0) && ((k%3 == 0) || (k%7 == 0) || (k%11 == 0)) ) printf("Vierte Bedingung erfuellt.\n");
	
	if( (b == c) && (c == d)) printf("Fuenfte Bedingung erfuellt.\n");
	
	return 0;
}

