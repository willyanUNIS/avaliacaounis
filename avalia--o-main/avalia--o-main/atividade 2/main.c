#include <stdio.h>


void main () {

float distancia, media;
float litros;


printf("Qual a distacia percorrida: ");
scanf("%f", &distancia);

printf("Quantos litros de combustivel gasto?:");
scanf("%f", &litros);

media = (distancia / litros);

printf("Distancia: %10.2f Km \n", distancia);
printf("Litros gastos: %10.2f litros \n", litros);
printf("consumo medio %10.2f Km/l \n", media);



}


