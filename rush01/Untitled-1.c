#include <stdio.h>

int ft_iterative_factorial(int nb);

int main ()
{
	int nb;
	nb = 6;
	int c;
	ft_iterative_factorial(nb);
	c =	ft_iterative_factorial(nb);
	printf("%d", c);
	return 0;
}  

int ft_iterative_factorial(int nb)
{
	int i;
	int resultado;

	if (nb < 0 || nb > 12)
		return (0);
    if (nb == 0)
	    return (1);

    i = 1;
	resultado = 1;
    while (i <= nb)
		{
			resultado *= i;
			i++;
        }
	return (resultado);
}
