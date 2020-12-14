#include <stdio.h>
//알파벳 찾기
int	main()
{
	int		arr[26] = {0, };
	char	in_put[100];

	scanf("%s", in_put);
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	for (int i = 0; in_put[i]; i++)
	{
		if (arr[in_put[i] - 'a'] == -1)
			arr[in_put[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}