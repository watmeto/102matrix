#include <stdio.h>
void	produitm(int *matriceA, int *matriceB, int base)
{
	int i;
	int tab[4];
	croise(matriceA, matriceB, tab);
	write(1, "A.B:\t\t",6);
	i = 0;
	while (i < 4 )
	{
		putchar(9);
		decimal_to_any(tab[i], base);
		my_putchar(9);
		i += 1;
	}
	write(1, "\nB.A:\t\t",7);
	croise(matriceB, matriceA, tab);
	i = 0;
	while (i <= 3 )
	{
		putchar(9);
		decimal_to_any(tab[i], base);
		my_putchar(9);
		i += 1;
	}


}
int	croise(int *matriceA, int *matriceB, int *croisee)
{
	croisee[0] = matriceA[0]*matriceB[0]+matriceA[1]*matriceB[2];
	croisee[1] = matriceA[0]*matriceB[1]+matriceA[1]*matriceB[3];
	croisee[2] = matriceA[2]*matriceB[0]+matriceA[3]*matriceB[2];
	croisee[3] = matriceA[2]*matriceB[1]+matriceA[3]*matriceB[3];
}
