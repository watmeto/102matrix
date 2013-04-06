#include <stdio.h>
#include <stdlib.h>
int 	main(int ac, char **av)
{
	if (ac >= 8 && (av[1][0] >= '1' && av[1][0] <= '4'))
	{
		int bon = debut(ac, atoi(av[1]));
		if (bon != 0)
		{
			int matriceA[4];
			int matriceB[4];
			int matriceAB[4];
			int i, a = 0, b = 7;
			if (bon == 4)
				b = 10;
			else if (bon == 3)
				b = 8;
			printf("MatriceA:\t");
			for (i = 3; i <= 6; i++)
			{
				matriceA[a] = any_to_decimal(av[i], atoi(av[2]));
			//	printf("%d\t", matriceA[a]);
printf("%s\t", av[i]);
			a++;
			}
			a = 0;
			printf("\n");
			if (b != 7) 
				printf("MatriceB:\t");
			else 
				printf("P:");
			for (i = 7; i <= b; i++)
			{
				matriceB[a] = any_to_decimal(av[i], atoi(av[2]));
printf("%s\t", av[i]);
			//	printf("%d\t", matriceB[a]);
				a++;
			}
			printf("\n");
			if (atoi(av[1]) == 1)	
				somme(matriceA, matriceB,atoi(av[2]));
			else if (atoi(av[1]) == 2)	
				multi(matriceA, atoi(av[3]),atoi(av[2]));
			else if (atoi(av[1]) == 3 )	
				produitv(matriceA, matriceB,atoi(av[2]));
			else if (atoi(av[1]) == 4 )	
				produitm(matriceA, matriceB,atoi(av[2]));
			else
				printf("OPTION NON VALIDE");
			printf("\n");
		}
		else
			printf("Verifiez les options:\n");
	}
	else
		printf("Verifiez les options\n");

}
