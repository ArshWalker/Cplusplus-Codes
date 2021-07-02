#include <bits/stdc++.h>
using namespace std;

int main()
{
     int rows, cols;
     cin >> rows >> cols;
     int x;
     cin >> x;
     int arr[rows][cols];

     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               cin >> arr[i][j];
          }
     }

     bool found = false;
     int r = 0, c = cols - 1;

     while (r < rows && c >= 0)
     {
          if (arr[r][c] == x)
          {
               found = true;
          }
          if (arr[r][c] > x)
          {
               c--;
          }
          else
          {
               r++;
          }
     }

     if (found)
     {
          cout << "Element Found";
     }
     else
     {
          cout << "not found";
     }

     return 0;
}