void	ft_tolower(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'A' && src[i] <= 'Z')
			src[i] = src[i] + 32;
		i++;
	}
}
