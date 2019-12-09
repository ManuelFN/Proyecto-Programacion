#include "funcion1.h"
#include "funcion2.h"

void comprobarnum(FILE *fich, FILE *fich2, int totcli, int totmen);

void comprobarnum(FILE *fich, FILE *fich2, int totcli, int totmen){
	
	fich2 = fopen ("Mensaje.dat", "r+b");
	fich = fopen ("Cliente.dat", "r+b");
	fread(&clientes,totcli,1,fich);
	while(!feof(fich))
	{
		fread(&mensa,totmen,1,fich2);
		while(!feof(fich2))
			{
				if(clientes.num==mensa.num2)
					{
						strcpy(mensa.elim,"SI");
						printf("Número de empleado\n");
						printf("%d\n",mensa.emple);
						printf("Número de destino");
						printf("%d\n",mensa.dest);
						printf("Fecha");
						printf("%s\n",mensa.fechayhoramn);
					}
						
				fread(&mensa,totmen,1,fich2);	
			}
			
		fread(&clientes,totcli,1,fich);	
	}
	
}
