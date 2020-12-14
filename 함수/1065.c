#include <stdio.h>

int check(int *arr, int i, int cnt)
{
  int take;

  take = 1;
  if (i + 3 < cnt)
    take *= check(arr, i + 1, cnt);
  if (arr[i] - arr[i + 1] == arr[i + 1] - arr[i + 2])
    return (1 * take);
  else
    return (0);
}

int f_d(int n)
{
  int arr[10];
  int cnt;
  int i;

  i = 0;
  cnt = 0;
  while (n > 0)
  {
    arr[i] = n % 10;
    n /= 10;
    cnt++;
    i++;
  }
  if (cnt <= 2)
    return (1);
  return (check(arr, 0, cnt));
}

int main()
{
  int i;
  int sum;

  sum = 0;
  scanf("%d", &i);
  for (int k = 1; k <= i; k++)
  {
    if (f_d(k) == 1)
      sum++;
  }
  printf("%d", sum);
  return (0);
}