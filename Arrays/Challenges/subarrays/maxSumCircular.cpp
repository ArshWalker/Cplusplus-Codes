#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
     int currSum = 0;
     int maxSum = INT_MIN;

     for (int i = 0; i < n; i++)
     {
          currSum += a[i];
          if (currSum < 0)
          {
               currSum = 0;
          }
          maxSum = max(maxSum, currSum);
     }
     return maxSum;
}

int main()
{
     int n;
     cin >> n;
     int a[n];
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }

     int wrapping;
     int non_wrapping;

     non_wrapping = kadane(a, n);

     int totalSum = 0;

     for (int i = 0; i < n; i++)
     {
          totalSum += a[i];
          a[i] = -a[i];
     }

     wrapping = totalSum + kadane(a, n); // here a is sum of non contributing element. #11

     cout << max(wrapping, non_wrapping);

     return 0;
}