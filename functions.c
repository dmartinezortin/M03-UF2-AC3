/*
 * functions.c
 *
 *  Created on: 25 feb. 2021
 *      Author: dani
 */

#include <stdio.h>
#include "functions.h"
#include <string.h>

#define A1 "A18-01"
#define A2 "A19-03"
#define A3 "INFO3-04"

#define OS1 "Windows"
#define OS2 "Ubuntu"
#define OS3 "Debian"

void insertData(int u){
	int i, aux;
	struct computers pc[u];
	for(i=0;i<u;i++){
		printf("Introdueix les dades per l'ordinador %d \n\n", i);

		strcpy(pc[i].room, insertRoom());

		strcpy(pc[i].os, insertOs());

		printf("Quin es la seva IP: ");
		scanf("%s", pc[i].ip);

		printf("\n");
	}
}
void printData(int u){
	int i;
	struct computers pc[u];
	for(i=0;i<u;i++){
		printf("\n\t    PC %d\n\t\n\tAULA : %s\n\tOS : %s\n\tIP : %s\n\t\n", i, pc[i].room, pc[i].os, pc[i].ip );
	}
}

char* insertRoom(int aux){
	printf("Introdueix el nom de l'aula {1: A18-01, 2: A19-03, 3: INFO3-04} : ");
	do{
		scanf("%d", &aux);
	}while(aux < 1 || aux > 3);
	switch(aux){
		case 1:
			return A1;
			break;
		case 2:
			return A2;
			break;
		case 3:
			return A3;
			break;
		}
	return 0;
}

char* insertOs(int aux){
	printf("Introdueix el seu SO \n1. Windows\n2. Ubuntu\n3. Debian: ");
	do{
		scanf("%d", &aux);
	}while(aux < 1 || aux > 3);
	switch(aux){
		case 1:
			return OS1;
			break;
		case 2:
			return OS2;
			break;
		case 3:
			return OS3;
			break;
		}
	return 0;
}
