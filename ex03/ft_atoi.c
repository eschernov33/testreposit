int ft_atoi(char str*)
{
	int i;
	int is_negative;
	int res;

	i = 0;
	is_negative = 0;
	res = 0;
	
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' ||
		str[i] == '\f' || str[i] == '\v' || str[i] == ' ')
	i++;
	
	if (str[i] == '-')
		is_negative = 1;

	if (str[i] == '-' || str[i] == '+')
		i++;

	while (str[i] >= '0' && str[i] <= '9')
		{ 
			res = res * 10 + (str[i] - '0');
		}

	if (is_negative == 1)
		return (-res);
	else 
		return (res);
