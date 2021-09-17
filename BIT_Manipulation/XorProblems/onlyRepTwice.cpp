#include <bits/stdc++.h>
using namespace std;

int unique(int arr[], int n)
{
     int res = 0;
     for (int i = 0; i < n; i++)
     {
          res = res ^ arr[i];
     }
     return res;
}

int main()
{
     int arr[7] = {5, 4, 1, 4, 3, 5, 1};
     cout << unique(arr, 7);
     return 0;
}