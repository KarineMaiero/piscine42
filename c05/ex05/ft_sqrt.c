

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	long	idex;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	idex = 2;
	if (b >= 2)
	{
		while (idex * idex <= b)
		{
			if (idex * idex == b)
			{
				return (idex);
			}
			idex++;
		}
	}
	return (0);
}

int main()
{
	printf("%d\n", ft_sqrt(-2282));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(16));
}
