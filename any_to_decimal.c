int	any_to_decimal(char *nbr, int base)
{
	int resultat = 0, i = 0, temp = base;
	i = my_strlen(nbr) - 1;

	while (i >= 0)
	{
		if (nbr[i] >= 'A' && nbr[i] <= 'F')
			resultat += base * ((nbr[i] - '0') - 7);
		else
			resultat += base * (nbr[i] - '0');
		base *= temp;
		i--;
	}
return	 (resultat/temp);
}
