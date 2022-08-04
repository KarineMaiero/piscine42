

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

int main()
{
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(2, 2));

}
