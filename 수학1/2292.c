#include <stdio.h>
#include <string.h>
//벌집
int	main()
{
	int	in_put;
	int out_put;
	int	cnt;

	in_put = 0;
	cnt = 1;
	out_put = 0;
	scanf("%d", &in_put);
	if (in_put == 1)
	{
		printf("1");
		return (0);
	}
	for (int i = 1; cnt < in_put; i++)
	{
		cnt += 6 * i;
		out_put = i + 1;
	}
	printf("%d", out_put);
	return (0);
}