#include <stdio.h>

#define PI 3.1415926535

// Schreiben Sie ein C-Programm, das nach der Eingabe des Radius als Gleitpunktzahl den Umfang und die Fläche eines Kreises berechnet und ausgibt.

int main(){
    float radius;
    printf("This is a program for calculating the circumference and area of a circle with a given radius.\n\n");
    printf("Please enter the radius as a floating point number: ");
    scanf("%f", &radius);

    printf("\nThe circle with the radius %f has an area of %f and a circumference of %f.\n", radius, radius*radius*PI, radius*2.*PI);
}

// 10001111 >> 1 = 01000111 = 71
