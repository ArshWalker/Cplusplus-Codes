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
          cout << endl;
     }
     int flag = false;
     for (int i = 0; i < rows; i++)
     {
          for (int j = 0; j < cols; j++)
          {
               if (arr[i][j] == x)
               {
                    cout << i << " " << j << endl;
                    flag = true;
               }
          }
     }

     if (flag)
     {
          cout << "element found!";
     }
     else
     {
          cout << "not found";
     }
     return 0;
}