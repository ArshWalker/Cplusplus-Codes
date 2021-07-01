#include <bits/stdc++.h>
using namespace std;

int main()
{
     int rows, cols;
     cin >> rows >> cols;
     int arr[rows][cols];

     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cin >> arr[i][j];
          }
          // cout << endl;
     }

     int row_start = 0, row_end = rows - 1, column_start = 0, column_end = cols - 1;

     while (row_start <= row_end && column_start <= column_end)
     {
          // row start
          for (int i = column_start; i <= column_end; i++)
          {
               cout << arr[row_start][i] << " ";
          }
          row_start++;
          // col end
          for (int j = row_start; j <= row_end; j++)
          {
               cout << arr[j][column_end] << " ";
          }
          column_end--;
          // row end
          if (row_start <= row_end)
          {
               for (int k = column_end; k >= column_start; k--)
               {
                    cout << arr[row_end][k] << " ";
               }
          }
          row_end--;
          // col start
          if (column_start <= column_end)
          {
               for (int l = row_end; l >= row_start; l--)
               {
                    cout << arr[l][column_start] << " ";
               }
          }
          column_start++;
     }
     return 0;
}