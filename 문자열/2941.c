#include <stdio.h>
#include <string.h>
//크로아티아 알파벳
int	main()
{
	char	in_put[101];
	int		out_put;

	out_put = 0;
	scanf("%s", in_put);
	for (int i = 0; i < strlen(in_put); i++)
	{
		if (in_put[i] == 'd' && in_put[i + 1] == 'z' && in_put[i + 2] == '=')
			out_put--;
		else if (in_put[i] == '=' || in_put[i] == '-')
			out_put--;
		else if (in_put[i] == 'l' && in_put[i + 1] == 'j')
			out_put--;
		else if (in_put[i] == 'n' && in_put[i + 1] == 'j')
			out_put--;
		out_put++;
	}
	printf("%d\n", out_put);
	return (0);
}