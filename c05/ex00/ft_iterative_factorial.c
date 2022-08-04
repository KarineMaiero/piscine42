
#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

int main()
{
	printf("%d", ft_iterative_factorial(12));
	return(0);
}
