#include <stdio.h>

int			fibonacci(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (0);
	if (num == 1)
		return (1);
	if (num >= 2)
		return (fibonacci(num - 1) + fibonacci(num - 2));
	return (0);
}

int			main(void)
{
	int		idx;

	idx = 0;
	while (idx <= 10)
	{
		printf("F%d = %d\n", idx, fibonacci(idx));
		idx++;
	}
	return (0);
}
