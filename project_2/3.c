// 다음 식을 참고로 섭씨 온도(C)를 화씨 온도(F)로 변환하는 프로그램을 다음과 같은 출력이 나오게 작성하시오
// - F = (9.0 / 5.0)C + 32
// 섭씨온도가 -60부터 140까지 20씩 증가, 이 때의 화씨 온도를 구하여 출력하는데, 온도는 모두 정수 형태로 출력

#include <stdio.h>

#define F(C) (9.0 / 5.0) * C + 32

int			main(void)
{
	double	C;

	C = -60.0;
	while (C <= 140)
	{
		printf("섭씨 %.f도는 화씨 %.f도 입니다.\n", C, F(C));
		C += 20;
	}
	return (0);
}