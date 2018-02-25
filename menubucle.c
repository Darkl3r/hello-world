#include <stdio.h>
#include <stdlib.h>

int main()
{
	char opcion;
	int w,x,y,z;

	do
	{	system("cls");

		printf("DKL\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
		printf("\n\t\t\t   %cMENU DE OPCIONES%c\n",186,186);
		printf("\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
		printf("Presione (A) Para calcular pares.\nPresione (B) Para calcular impares.\n");
		printf("Presione (C) Para calcular el mayor de 4 numeros.\n\nPresione (0) Para salir.\n\n\n");
		scanf("%c",&opcion);

		switch(opcion)
		{
			case 'A': system("cls");
			printf("DKL\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
			printf("\n\t\t\t\t%cCALCULAR PARES%c\n",186,186);
			printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
			printf("Introduzca un numero entero: "); scanf("%i",&w);

			if(w%2==0)
			{
				printf("El numero %i es par.\n\n",w);
			}
			else
			{
				printf("El numero %i no es par.\n\n",w);
			}
			system("pause");
			break;

			case 'B': system("cls");
			printf("DKL\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
			printf("\n\t\t\t\t%cCALCULAR IMPARES%c\n",186,186);
			printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
			printf("Introduzca un numero entero: "); scanf("%i",&w);

			if(w%2==0)
			{
				printf("El numero %i no es impar.\n\n",w);
			}
			else
			{
				printf("El numero %i es impar.\n\n",w);
			}
			system("pause");
			break;

			case 'C': system("cls");
			printf("DKL\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
			printf("\n\t\t\t\t%cCALCULAR MAYOR DE 4%c\n",186,186);
			printf("\t\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);

			printf("Introduzca (4) numeros enteros separados por un espacio: "); scanf("%i %i %i %i",&w,&x,&y,&z);

			if((w>x)&&(w>y)&&(w>z))
			{
				printf("El mayor de los cuatro es: %i.\n\n",w);
			}
			else if((x>w)&&(x>y)&&(x>z))
			{
				printf("El mayor de los cuatro es: %i.\n\n",x);
			}
			else if((y>w)&&(y>x)&&(y>z))
			{
				printf("El mayor de los cuatro es: %i.\n\n",y);
			}
			else
			{
				printf("El mayor de los cuatro es: %i.\n\n",z);
			}
			system("pause");
			break;

			case '0': system("cls");
			printf("Hasta pronto...!\n\n\n");
		}

	}while(opcion != '0');

	system("pause");
	return 0;
}
