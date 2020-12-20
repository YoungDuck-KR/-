#include <stdio.h>
#include <string.h>
//손익분기점
int	main()
{
	int	basic;
	int	dinamic;
	int	price;

	basic = 0;
	dinamic = 0;
	price = 0;
	scanf("%d %d %d", &basic, &dinamic, &price);
	if (dinamic >= price)
	{
		printf("-1");
		return (0);
	}
	printf("%d", basic/(price - dinamic) + 1);
	return (0);
}