// Next smallest element

#include <bits/stdc++.h>

using namespace std;

void nearestElement(int a[], int n)
{
     stack<int> st;
     int ans[n];

     for (int i = n - 1; i >= 0; i--)
     {
          while (!st.empty() && st.top() >= a[i])
          {
               st.pop();
          }
          if (st.empty())
          {
               ans[i] = -1;
          }
          else
          {
               ans[i] = st.top();
          }

          st.push(a[i]);
     }

     for (int i = 0; i < n; i++)
     {
          cout << a[i] << "--> " << ans[i] << endl;
     }
}

int main()
{
     int a[] = {4, 10, 5, 18, 3, 12, 7};
     int n = sizeof(a) / sizeof(a[0]);
     nearestElement(a, n);
     return 0;
}