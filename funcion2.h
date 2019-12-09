 
 struct grupo2
{
	char clien [30];
	char geren[30];
	int num;
	char ope[20];
} clientes2;

struct mn2
{
	int dest;
	char text[161];
	char fechayhoramn[100];
	int num2;
	int codmen;
	int emple;
	char elim[6];
	
} mensa2;

struct conv2
 {
 int peso;
 char equival; 
 } asc2[192];

void mensaje(FILE *ffich2,int ftotmen, char ffechayhora[100])
	{
		char siono[1];
		
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
