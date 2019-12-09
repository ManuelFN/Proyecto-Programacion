#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#include "funcion1.h"
#include "funcion2.h"
#include "funcion4.h"
#include "funcion5.h"
#include "funcion6.h"

int main(void)
{
	time_t t;
	struct tm *tm;
	char fechayhora[100]="";
	t=time(NULL);
	tm=localtime(&t);
	strftime(fechayhora, 100, "%d/%m/%Y", tm);//recupera el tiempo
	
	int totcli=sizeof(clientes);
	int totmen=sizeof(mensa);	
		
	setlocale(LC_ALL,"");
	
	FILE *fich;
	FILE *fich2;
	
	int menu;
	char clave[20];
		
	do
	{	
		printf("\n                                     APLICACIÓN MENSAJES MÓVILES\n");
		printf("                                    =============================\n\n");
		printf("                             1) Rellenar fichero de clientes\n");
		printf("                             2) Componer el mensaje de texto\n");
		printf("                             3) Formatear mensaje (opcional a mejora)\n");
		printf("                             4) Introducir la clave\n");
		printf("                             5) Codificar mensaje de un envío\n");
		printf("                             6) Comprobar número del envío\n");
		printf("                             7) Salir\n");
		printf ("\n\n                                   Opción: ");
		scanf("%d", &menu);
		fflush(stdin);
		
		
		switch(menu)
		{
			case 1:
				
			fich = fopen ("Cliente.dat", "a+b");
			alta(fich,totcli);
			fclose(fich);
			
				break;
			case 2:
				
				fich2 = fopen ("Mensaje.dat", "a+b");
				mensaje(fich2,totmen,fechayhora);
				fclose(fich2);
				break;
				
			case 3:
				
				printf("\n\n                           NO CONTEMPLADO");
				break;
				
			case 4:
				
				clavef(clave);
				break;
				
			case 5:
				
				fich2 = fopen ("Mensaje.dat", "r+b");
				codificar(fich2, fich, clave, totcli, totmen);
				fclose(fich2);
				break;
				
			case 6:
				fich2 = fopen ("Mensaje.dat", "r+b");
				comprobarnum(fich, fich2, totcli, totmen);
				fclose(fich2);
				break;
				
			case 7:	
				
				printf("\n\n                                            Has salido");
				break;
				
			default:break;
		}
	}
	
	while(menu!=7);
	
	return 0;	
}

