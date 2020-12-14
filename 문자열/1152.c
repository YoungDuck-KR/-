#include <stdio.h>
#include <string.h>

int	main()
{
	char	in_put[1000001];
	int		cnt;

	cnt = 0;
	scanf("%[^\n]", in_put);
	for (int i = 0; i < strlen(in_put); i++)
	{
		if (in_put[i] == ' ')
			i++;
		if (in_put[i] != ' ' && i < strlen(in_put))
			cnt++;
		while (in_put[i] != ' ' && i < strlen(in_put))
			i++;
	}
	printf("%d\n", cnt);
	return (0);
}