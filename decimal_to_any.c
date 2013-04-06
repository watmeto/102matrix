void	decimal_to_any(int nbr, int end)
{
	int deb, fin;
	deb = nbr / end;
	fin = nbr  % end;
//	my_putchar(9);

	if (deb != 0)
		decimal_to_any(deb, end);

	if(fin >= 10 && fin <= 17)
	{
		fin += 7;
		my_putchar(fin + '0');
	}
	else
		my_putchar(fin + '0');
}
