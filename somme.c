#include <stdio.h>
//void	decimal_to_any(int nbr, int end);
void	somme(int *tabA, int *tabB, int base)
{
	int i = 0,a;
	write(1,"A+B\t\t",5);
	//write(1, 'z' ,1);
	while (i  < 4)
	{
		a = tabA[i]+tabB[i];
		//putchar('\t');
		//		printf( "%d    ",a);
		decimal_to_any(a, base);
		my_putchar(9);
		//	my_putchar('\t');
		//		fflush(stdin);
		i++;
	}

}
