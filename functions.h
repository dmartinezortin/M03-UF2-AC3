/*
 * functions.h
 *
 *  Created on: 25 feb. 2021
 *      Author: sergi
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_



struct computers{
		char room[20];
		char os[30];
		char ip[16];
};

#endif /* FUNCTIONS_H_ */

void insertData(int u);

void printData(int u);

char* insertRoom();
char* insertOs();
