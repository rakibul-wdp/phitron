#include <stdio.h>

void fun(double *arr, int n) // arr[] or *arr
{
  for (int i = 0; i < n; i++)
  {
    printf("%0.2lf ", arr[i]);
  }
}

int main()
{
  double arr[5] = {9.9, 8.5, 7.3, 6.5, 5.45};
  fun(arr, 5);

  return 0;
}