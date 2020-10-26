#include <stdio.h>
#include <stdlib.h>

void		make_recursive(int num, char *str, int len)
{
	if (len > 0)
	{
		make_recursive(num / 16, str, len - 1);
		str[len - 1] = (num % 16) + '0';
		if (num % 16 > 9)
			str[len - 1] = (num % 16) - 10 + 'a';
	}
}

char		*make_hexadecimal(int num)
{
	char	*hexadecimal;
	int		cp_num;
	int		len;

	len = 0;
	cp_num = num;
	while (cp_num > 0)
	{
		cp_num /= 16;
		len++;
	}
	if (!(hexadecimal = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	hexadecimal[len] = '\0';
	make_recursive(num, hexadecimal, len);
	return (hexadecimal);
}

int			main(void)
{
	int		num;
	char	*result;

	printf("수를 입력하시오 : ");
	scanf("%d", &num);
	result = make_hexadecimal(num);
	printf("%s\n", result);
	return (0);
}
