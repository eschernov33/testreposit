void ft_putchar(char c);

void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	//letter = 97;
	while(letter <= 'z')
	{
		ft_putchar(letter);	
		letter = letter + 1;
	//	letter++;
	}

}
