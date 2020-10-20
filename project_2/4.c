// 다음을 참고로 int형 포인터에 관한 프로그램을 작성하시오.
//
// - 두 정수를 저장하기 위해 변수를 선언하여 각각 10, 20을 저장하고.
// 두 변수의 주소값ㅇ르 저장하는 포인터 두개를 선언하여 저장
// 			int data1 = 10, data2 = 20;
// 			int *p1 = &data1, *p2 = &data2;

// - 다음 변수 sum과 이중 포인터 변수 dp를 선언한 후,
// dp와 p1, p12 그리고 sum만을 사용하여 data1에는 100을 data2에는 저장한 후
// 위의 두 변수의 합을 변수 sum에 저장하여 출력
// 			int sum = 0;
// 			int **dp;

#include <stdio.h>

int			main(void)
{
	///// (1) /////

	int		data1;
	int		data2;
	int		*p1;
	int		*p2;

	data1 = 10;
	data2 = 20;
	p1 = &data1;
	p2 = &data2;

	///// (2) /////

	int		sum;
	int		**dp;

	dp = &p1;
	**dp = 100;
	dp = &p2;
	**dp = 200;
	sum = 0;
	sum += *p1;
	sum += *p2;
	printf("SUM: %d\n", sum);
	return (0);
}
