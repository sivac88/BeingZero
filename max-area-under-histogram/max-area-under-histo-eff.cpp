#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,i,tp;
   long long int ans,cur;
   cin>>t;
   while(t--)
   {
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
         cin>>a[i];
      ans = 1;
      stack<int> s;
      i=0;
      while(i<n)
      {
          if(s.empty() || a[s.top()] <= a[i])
            s.push(i++);
          else
          {
             tp=s.top();
             s.pop();
             
             cur = ((long long int)a[tp]) * (s.empty() ? i : (i-s.top()-1));
             ans = max(ans,cur);
          }
      }
     
      while(!s.empty())
      {
          tp=s.top();
          s.pop();

          cur = ((long long int)a[tp]) * (s.empty() ? i : (i-s.top()-1));
          ans = max(ans,cur);

      }
     
      cout<<ans<<endl;

   }
}
