// 다음을 참고로 배열을 초기화하고 반복문을 사용하여 배열의 모든 원소를 출력하는 프로그램을 작성하시오
// 배열 double degree[] = {-5.34, 3.67, 19.76, 28.76, 35.63};
// 배열의 크기를 계산하여 변수 size에 저장해 반복문 사용

#include <stdio.h>

int			main(void)
{
	double	degree[] = {-5.34, 3.67, 19.76, 28.76, 35.63};
	int		size;
	int		idx;

	size = sizeof(degree) / sizeof(double);
	idx = 0;
	while (idx < size)
	{
		printf("%.2f ", degree[idx]);
		idx++;
	}
	printf("\n");
}
