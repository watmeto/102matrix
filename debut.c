int debut(int ac, int option)
{
	if (ac >= 11 && (option == 1 || option == 4))
		return (4);
	else if (ac >= 9 && option == 3 )
		return (3);
	else if (ac >= 8 && option == 2 )
		return (2);
	else
		return (0);

}
