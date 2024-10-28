/*
 * quadratzahlen.c
 *
 *  Created on: Oct 17, 2024
 *      Author: alex
 */

#include <stdio.h>
#define ANZAHL 10

/* Dieses Programm gibt die Liste der ersten ANZAHL Quadratzahlen aus. */

int main(){
	int zahl = 1;

	printf("Liste der ersten %d Quadratzahlen:\n", ANZAHL);
	while (zahl <= ANZAHL){
		printf("%d\n",zahl);
		zahl = zahl + 1;
	}

	return 0;
}
