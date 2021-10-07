#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
     if (c == '^')
          return 3;
     else if (c == '*' || c == '/')
          return 2;
     else if (c == '+' || c == '-')
          return 1;
     else
          return -1;
}

string inftopref(string s)
{
     stack<char> st;
     string res;

     reverse(s.begin(), s.end());

     for (int i = 0; i < s.length(); i++)
     {
          if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
          {
               res += s[i];
          }
          else if (s[i] == ')')
          {
               st.push(s[i]);
          }
          else if (s[i] == '(')
          {
               while (!st.empty() && st.top() != ')')
               {
                    res += st.top();
                    st.pop();
               }
               if (!st.empty())
               {
                    st.pop();
               }
               // opening '(' pooped
          }
          else
          {
               while (!st.empty() && prec(st.top()) >= prec(s[i]))
               {
                    res += st.top();
                    st.pop();
               }
               st.push(s[i]); //push the current operator in stack
          }
     }
     // if some elements are remaining...........
     while (!st.empty())
     {
          res += st.top();
          st.pop();
     }
     reverse(res.begin(), res.end());
     return res;
}

int main()
{
     cout << inftopref("(a-b/c)*(a/k-l)") << endl;
     return 0;
}

// instead of reversing the string and then solving in the code of infix to postfix:-
// 1 ) itterate from last of string
// 2) change ) -> ( and ( - > )
// 3) change  res += s[i] to res = res + s[i];
