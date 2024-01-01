#include <stdio.h>

int main()
{
  int row, col;
  scanf("%d %d", &row, &col);
  int arr[row][col];
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
      scanf("%d", &arr[i][j]);
  }

  // exact row
  int exact_row;
  scanf("%d", &exact_row);
  for (int i = 0; i < col; i++)
    printf("%d ", arr[exact_row][i]);

  // exact column
  int exact_column;
  scanf("%d", &exact_column);
  for (int i = 0; i < row; i++)
    printf("%d ", arr[i][exact_column]);

  return 0;
}