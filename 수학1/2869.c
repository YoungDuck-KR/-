#include <stdio.h>
//달팽이는 올라가고 싶다.
int	main()
{
	int	a;
	int	b;
	int	v;
	int day;

	a = 0;
	b = 0;
	v = 0;
	day = 1;
	scanf("%d %d %d", &a, &b, &v);
	v -= b;
	if (v % (a - b) == 0)
		day = v / (a - b);
	else
		day = (v / (a - b)) + 1;
	printf("%d", day);
	return (0);
}