/*
 * kantenlaenge.c
 *
 *  Created on: Oct 17, 2024
 *      Author: alex
 */

#include <stdio.h>

int main(){
	int a, circumference, area;
	a = 1;
	do {
		circumference = a * 4;
		area = a * a;
		a += 1;
	} while (circumference != area);
	printf("a: %d, circumference: %d, area: %d\n", a-1, circumference, area);
}
