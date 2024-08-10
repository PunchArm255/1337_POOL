#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact *= nb;
	   	nb--;	
	}
	return fact;
}

int main()
{
	printf("%d\n", ft_iterative_factorial(3));
	return 0;
}
