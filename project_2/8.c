// 다음을 참고로 [파스칼의 삼각형]을 출력하는 프로그램을 작성하시오
// 정수형 배열 pascal[10][10]을 선언하여 10행까지 [파스칼의 삼각형]을 저장 후 출력
// nCr = n! / (r!(n - r)!)

#include <stdio.h>

int			factorial(int num)
{
	int		idx;
	int		result;

	result = 1;
	idx = 2;
	while (idx <= num)
	{
		result *= idx;
		idx++;
	}
	return (result);
}

int			main(void)
{
	int		pascal[10][10];
	int		n;
	int		r;

	n = 0;
	while (n < 10)
	{
		r = 0;
		while (r <= n)
		{
			pascal[n][r] = factorial(n) / (factorial(r) * factorial(n - r));
			r++;
		}
		n++;
	}
	n = 0;
	while (n < 10)
	{
		r = 0;
		while (r <= n)
		{
			printf("%d ", pascal[n][r]);
			r++;
		}
		n++;
		printf("\n");
	}
	return (0);
}
