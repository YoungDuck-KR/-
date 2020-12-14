#include <stdio.h>
//문자열 반복
int	main()
{
	int		a;
	int		b;
	char	in_put[21];
	char	out_put[160] = {0, };
	int		j;
	int		len;

	a = 0;
	b = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		j = 0;
		len = 0;
		scanf("%d", &b);
		scanf("%s", in_put);
		while (in_put[len])
			len++;
		out_put[len * b] = '\0';
		for (int k = 0; in_put[k]; k++)
		{
			for (int p = 0; p < b; p++)
			{
				out_put[j] = in_put[k];
				j++;
			}
		}
		printf("%s\n", out_put);
	}
	return (0);
}