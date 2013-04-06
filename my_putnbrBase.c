void	my_putnbrBase(int nbr, int base)
{
	int deb, fin;

	deb = nbr / base;
	fin = nbr % base;

	if (deb != 0)
		my_putnbrBase(deb, base);
	if(fin >= 10 && fin <= 17)
	{
		fin += 7;
		my_putchar(fin + '0');
	}
	else
		my_putchar(fin + '0');
}
