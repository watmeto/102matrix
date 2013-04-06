#include <stdio.h>
void	produitv(int *matrice, int *vecteur, int base)
{
	int i = 0;
	int tab[4];
	tab[0] = (matrice[0]*vecteur[0]); 
	tab[1] = (matrice[2]*vecteur[0]); 
	tab[2] = (matrice[1]*vecteur[1]); 
	tab[3] = (matrice[3]*vecteur[1]); 
	write(1,"A.u:\t\t",6);
	while (i < 4)
	{
		if (tab[i] != 0)
			decimal_to_any(tab[i], base);
		my_putchar(9);
		i++;
	}



}
