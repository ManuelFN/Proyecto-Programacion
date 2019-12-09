
 struct grupo
{
	char clien [30];
	char geren[30];
	int num;
	char ope[20];
} clientes;

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

	void alta(FILE *ffich,int ftotcli)
		{
		printf("\n\n       Introduce el Cliente: "); 
			gets(clientes.clien);
		printf("\n       Introduce el Gerente: ");
			gets(clientes.geren);
		printf("\n       Introduce el Número: ");	
			scanf("%d",&clientes.num);
		fflush(stdin);
		printf("\n       Introduce el Operador: ");
			gets(clientes.ope);
			
		fwrite(&clientes,ftotcli,1,ffich);

		printf("\n        Datos incorporados al fichero\n");		
		}
