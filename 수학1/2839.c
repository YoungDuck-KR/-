#include <stdio.h>
#include <string.h>
//설탕 배달
int	main()
{
	int	kg;
	int	bong_g;

	kg = 0;
	bong_g = 0;
	scanf("%d", &kg);
	while(kg > 0)
	{
		if (kg % 5 == 0)
		{
			bong_g += kg / 5;
			break ;
		}
		kg -= 3;
		bong_g++;
		if (kg < 0)
		{
			bong_g = -1;
			break ;
		}
	}
	printf("%d\n", bong_g);
	return (0);
}