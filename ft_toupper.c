
void	ft_toupper(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 'a' && src[i] <= 'z')
			src[i] = src[i] - 32;
		i++;
	}
}
