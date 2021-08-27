/*
 ============================================================================
 Name        : Clase.c
 Author      : Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	printf("Esta es la primer clase\n");

	//declaramos variables

	int numero;
	int resta;

	//pedido al usuario
	printf("\nIngrese un numero");

	scanf("%d", &numero);


	//calculo
	resta = numero - numero;

	//mostramos resultado
	printf("\nLa resta es:\n%d",resta );




	return EXIT_SUCCESS;
}
