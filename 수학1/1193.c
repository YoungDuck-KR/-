#include <stdio.h>
#include <string.h>
//분수찾기
int	main()
{
	int	in_put;
	int	up;
	int	down;
	int	out_put;
	int	save_down;
	int	sign;

	out_put = 0;
	in_put = 0;
	up = 1;
	down = 1;
	save_down = 1;
	sign = -1;
	scanf("%d", &in_put);
	if (in_put == 1)
	{
		printf("1/1");
		return (0);
	}
	for (int i = 1; i < in_put; i++)
	{
		if (up == save_down && i < in_put)
		{
			save_down++;
			down = save_down;
			up = 1;
			sign *= -1;
		}
		else
		{
			up++;
			down--;
		}
	}
	if (sign == 1)
		printf("%d/%d", up, down);
	else
		printf("%d/%d", down, up);
	return (0);
}