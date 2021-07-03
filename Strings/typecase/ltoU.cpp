#include <bits/stdc++.h>
using namespace std;

int main()

{
     string str = "arshdeep singh";

     //convert in upper Case

     for (int i = 0; i < str.size(); i++)
     {
          if (str[i] >= 'a' && str[i] <= 'z')
          {
               str[i] -= 32;
          }
     }
     cout << str;

     return 0;
}