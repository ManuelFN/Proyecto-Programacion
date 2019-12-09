#pragma once
#include "funcion1.h"

struct mn
{
	int dest;
	char text[161];
	char fechayhoramn[100];
	int num2;
	int codmen;
	int emple;
	char elim[6];
	
} mensa;

struct conv
 {
 int peso;
 char equival; 
 } asc[192];

void mensaje(FILE *ffich2,int ftotmen, char ffechayhora[100]);

void mensaje(FILE *ffich2,int ftotmen, char ffechayhora[100])
	{
		
		printf("\n       Texto: "); 
			gets(mensa.text);
		printf("\n       Número destino: "); 
			scanf("%d",&mensa.num2);
			fflush(stdin);
		printf("\n       Empleado: ");
			scanf("%d",&mensa.emple);
			fflush(stdin);
			mensa.codmen++;	
			strcpy(mensa.fechayhoramn,ffechayhora);
			strcpy(mensa.elim,"NO");
			fwrite(&mensa,ftotmen,1,ffich2);
			printf("\n        %d Datos incorporados al fichero\n", mensa.codmen);
		
	}
