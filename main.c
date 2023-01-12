/*
 * main.c
 * Resposta do exercício 1 do capítulo 3.
 * Author: Thiago Leite
 */

#define TAMANHO 10
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int inteiros[TAMANHO];

	inteiros[0] = 10;
	inteiros[1] = 20;
	inteiros[2] = 30;
	inteiros[3] = 40;
	inteiros[4] = 50;
	inteiros[5] = 60;
	inteiros[6] = 70;
	inteiros[7] = 80;
	inteiros[8] = 90;
	inteiros[9] = 100;

	int i;
	for (i = 0; i < TAMANHO; i++) {
		printf("%d ", inteiros[i]);
	}

}
