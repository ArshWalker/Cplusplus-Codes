#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
     return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
     return ((n | (1 << pos)));
}

int unique(int arr[], int n)
{
     int res = 0;
     for (int i = 0; i < 64; i++)
     {
          int sum = 0;
          for (int j = 0; j < n; j++)
          {
               if (getBit(arr[j], i))
               {
                    sum++;
               }
          }

          if (sum % 3 != 0)
          {
               res = setBit(res, i);
          }
     }
     return res;
}

int main()
{
     int arr[7] = {2, 2, 1, 5, 1, 1, 2};
     cout << unique(arr, 7);
     return 0;
}