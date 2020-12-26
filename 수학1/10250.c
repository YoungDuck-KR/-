#include <stdio.h>
//ACM호텔
int main()
{
    int num;
    int h;
    int w;
    int n;

    num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        h = 0;
        w = 0;
        n = 0;
        scanf("%d %d %d", &h, &w, &n);
        if (n % h == 0)
            printf("%d%02d\n", h, n / h);
        else
            printf("%d%02d\n", n % h, (n / h) + 1);
    }
    return (0);
}