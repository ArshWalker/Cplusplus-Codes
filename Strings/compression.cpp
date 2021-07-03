// removing repeated elements
#include <bits/stdc++.h>
using namespace std;

int main()

{
     string str = "arrrrrsssssshhhhhdddddeeeeeepppp";

     int n = str.size();

     char ans[100];
     ans[0] = str[0];
     int cnt = 1;

     for (int i = 1; i < n; i++)
     {
          if (str[i] != str[i - 1])
          {
               ans[cnt] = str[i], cnt++;
          }
     }
     cout << ans << endl;

     return 0;
}