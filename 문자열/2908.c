#include <stdio.h>
#include <string.h>

int	main()
{
	char	f[4];
	char	b[4];

	scanf("%s", f);
	scanf("%s", b);
	for (int i = 2; i >= 0; i--)
	{
		if (f[i] > b[i])
		{
			for (int j = 2; j >= 0; j--)
				printf("%c", f[j]);
			break ;
		}
		if (f[i] < b[i])
		{
			for (int j = 2; j >= 0; j--)
				printf("%c", b[j]);
			break ;
		}
	}
	return (0);
}