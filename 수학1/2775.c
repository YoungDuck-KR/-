#include <stdio.h>
//부녀회장이 될테야
int main()
{
    int test;
    int k;
    int n;
    int house[15][14] = {0, };

    test = 0;
    for (int i = 0; i < 14; i++)
        house[0][i] = i + 1;
    for (int i = 0; i < 15; i++)
        house[i][0] = 1;
    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 14; j++)
            house[i][j] = house[i - 1][j] + house[i][j - 1];
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        k = 0;
        n = 0;
        scanf("%d\n%d", &k, &n);
        printf("%d\n", house[k][n - 1]);
    }
    return (0);
}