// 다음과 같이 int형 변수 i에 0x324F3A24를 정의하고, char * 변수 p를 선언한 후,
// 포인터 변수 p를 이용하여 i의 저장값을 각각 바이트로 인지하여 바로 324F3A24로 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int			main(void)
{
	int		i;
	char	*p;
	int		byte;

	i = 0x324F3A24;
	p = (char *)&i;
	byte = 0;
	while (*(p + byte))
		byte++;
	byte--;
	while (byte >= 0)
	{
		printf("%X", *(p + byte));
		byte--;
	}
	printf("\n");
	// byte = 0;
	// while(*(p + byte))
	// {
	// 	printf("%X", *(p + byte));
	// 	byte++;
	// }
	// return (0);
	byte = 3;
	while (byte >= 0)
	{
		printf("%X", *(p + byte));
		byte--;
	}
	return (0);

}
