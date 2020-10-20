// 다음과 같이 3 x 2 와 2 x 3의 두 행렬에서 행렬의 곱을 구하는 프로그램을 작성하시오

#include <stdio.h>

int			main(void)
{
	int		treetwo[3][2] = {{3, 5}, {4, 2}, {5, 7}};
	int		twotree[2][3] = {{3, 8, 2}, {2, 4, 6}};
	int		i;

	i = 0;
	while (i < 3)
	{
		printf("%d x %d : %d\n", treetwo[i][0], treetwo[i][1], treetwo[i][0] * treetwo[i][1]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 3)
	{
		printf("%d x %d : %d\n", twotree[0][i], twotree[1][i], twotree[0][i] * twotree[1][i]);
		i++;
	}
	return (0);
}
