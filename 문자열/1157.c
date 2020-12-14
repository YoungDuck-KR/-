#include <stdio.h>
#include <string.h>
//단어공부
int	arr_index(char in_put)
{
	if (in_put >= 'a' && in_put <= 'z')
		in_put -= 'a' - 'A';
	in_put -= 'A';
	return (in_put);
}

int	main()
{
	char	in_put[1000000];
	int		arr[26] = {0, };
	int		len;
	int	 	now_max;
	int		sign;
	int		arr_i;

	scanf("%s", in_put);
	len = strlen(in_put);
	for (int i = 0; i < len; i++)
		arr[arr_index(in_put[i])]++;
	sign = 1;
	now_max = arr[0];
	arr_i = 0;
	for (int i = 1; i < 26; i++)
	{
		if (now_max <= arr[i])
		{
			if (now_max == arr[i])
			{
				sign = 0;
				arr_i = i;
			}
			else
			{
				now_max = arr[i];
				sign = 1;
				arr_i = i;
			}
		}
	}
	if (sign == 0)
		printf("?\n");
	else
		printf("%c\n", arr_i + 'A');
	return (0);
}