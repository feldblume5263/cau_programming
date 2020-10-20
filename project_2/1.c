#include <stdio.h>

// 표준입력으로 입력한 정수에서 각각의 자리에 해당하는 수를
// 반대로 출력하는 프로그램을 do while 문을 이용하여 작성하시오

int			main(void)
{
	int		num;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	do
	{
		printf("%d", num % 10);
		num /= 10;
	} while (num < 10);
	printf("%d", num);
	printf("\n");
}
