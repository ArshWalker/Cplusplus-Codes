#include <bits/stdc++.h>
using namespace std;

int posteval(string s)
{
     stack<int> st;

     for (int i = 0; i <= s.length() - 1; i++)
     {
          if (s[i] >= '0' && s[i] <= '9')
          {
               st.push(s[i] - '0');
          }
          else
          {
               int opt2 = st.top();
               st.pop();
               int opt1 = st.top();
               st.pop();

               switch (s[i])
               {
               case '+':
                    /* code */
                    st.push(opt1 + opt2);
                    break;

               case '-':
                    /* code */
                    st.push(opt1 - opt2);
                    break;
               case '*':
                    /* code */
                    st.push(opt1 * opt2);
                    break;
               case '/':
                    /* code */
                    st.push(opt1 / opt2);
                    break;
               case '^':
                    /* code */
                    st.push(pow(opt1, opt2));
                    break;
               default:
                    break;
               }
          }
     }
     return st.top();
}

int main()
{

     cout << posteval("46+2/5*7+");

     return 0;
}