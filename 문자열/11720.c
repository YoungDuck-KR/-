#include <stdio.h>
//숫자의 합
int	main()
{
	int		i;
	char	arr[100];
	int		sum;

	i = 0;
	sum = 0;
	scanf("%d", &i);
	scanf("%s", arr);
	for (int k = 0; k < i; k++)
	{
		sum += arr[k] - '0';
	}
	printf("%d", sum);
	return (0);
}