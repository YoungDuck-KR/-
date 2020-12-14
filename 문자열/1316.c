#include <stdio.h>
#include <string.h>
//그룹 단어 체커
int	main()
{
	char	str[101];
	int		n;
	int		alpha[26];
	int		out_put;

	out_put = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		for (int set = 0; set < 26; set++)
			alpha[set] = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			if (alpha[str[j] - 'a'] != 0)
				break ;
			alpha[str[j] - 'a']++;
			while (str[j] == str[j + 1] && j < strlen(str))
				j++;
			if (j + 1 == strlen(str))
				out_put++;
		}
	}
	printf("%d\n", out_put);
	return (0);
}