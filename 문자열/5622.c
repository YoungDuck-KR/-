#include <stdio.h>
#include <string.h>
//다이얼
int	main()
{
	char	in_put[16];
	int		out_put;

	out_put = 0 ;
	scanf("%s", in_put);
	for (int i = 0; i < strlen(in_put); i++)
	{
		if (in_put[i] == '1')
			out_put += 2;
		if (in_put[i] >= 'A' && in_put[i] <= 'C')
			out_put += 3;
		if (in_put[i] >= 'D' && in_put[i] <= 'F')
			out_put += 4;
		if (in_put[i] >= 'G' && in_put[i] <= 'I')
			out_put += 5;
		if (in_put[i] >= 'J' && in_put[i] <= 'L')
			out_put += 6;
		if (in_put[i] >= 'M' && in_put[i] <= 'O')
			out_put += 7;
		if (in_put[i] >= 'P' && in_put[i] <= 'S')
			out_put += 8;
		if (in_put[i] >= 'T' && in_put[i] <= 'V')
			out_put += 9;
		if (in_put[i] >= 'W' && in_put[i] <= 'Z')
			out_put += 10;
		if (in_put[i] == '0')
			out_put += 11;
	}
	printf("%d\n", out_put);
	return (0);
}