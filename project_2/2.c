// 다음 조건을 만족하는 프로그램을 작성하시오
// - 원금이 1,000,000인 경우, 예치기간을 1년에서 10년까지 매년 말에 받을 총 금액을 출력
// - 년단위 단리이자 = 원금 * 이율(4.5%) * 년(예치기간)
// - 만기 시 총 수령(단리적용) = 원금(1 + 이율(4.5%) * 년(예치기간))

#include <stdio.h>

int			main(void)
{
	int		principal;
	int		year;
	double	rate;

	principal = 1000000;
	year = 1;
	rate = 4.5 / 100;
	while (year <= 10)
	{
		printf(" %d년 만기 시, 년 말 총 수령액 : ", year);
		printf("%.f\n", (double)principal * (1.0 + rate * (double)year));
		year++;
	}
	return (0);
}
