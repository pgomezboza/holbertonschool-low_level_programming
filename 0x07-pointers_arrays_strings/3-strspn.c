/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String to search
 * @accept: The acceptable bytes string can contain
 * Description:
 * Return: Number of bytes in the intial segment of `s`
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, ln = 0, ac;

	while (s[i] != 0)
	{
		j = 0;
		ac = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				ac++;
				ln++;
				j++;
			}
		}
		if (ac == 0)
			return (ln);
		i++;
	}

	return (ln);
}
