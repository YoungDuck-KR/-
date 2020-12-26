#include <stdio.h>
//Fly me to the Alpha Centauri
int	n_y(int dist)
{
	int 			y;
	long long int	i;
	long long int	minus_1;

	y = 0;
	i = 2;
	while (i * i < dist)
		i++;
	y = i * 2 - 1;
	minus_1 = (i * i - (i - 1) * (i - 1)) / 2;
	if (dist <= (i - 1) * (i - 1) + minus_1)
		y -= 1;
	return (y);
}

int	main()
{
	int	tc;
	int	start;
	int	end;
	int	dist_y;

	tc = 0;
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++)
	{
		start = 0;
		end = 0;
		dist_y = 0;
		scanf("%d %d", &start, &end);
		dist_y = end - start;
		if (dist_y == 1)
			printf("1\n");
		if (dist_y == 2)
			printf("2\n");
		if (dist_y >= 3)
		{
			end = n_y(dist_y);
			printf("%d\n", end);
		}
	}
	return (0);
}