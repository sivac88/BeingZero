#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t,n,i,j,left_idx,right_idx;
   long long int ans;
   cin>>t;
   while(t--)
   {
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
         cin>>a[i];
      ans = 1;
      for(i=0;i<n;i++)
      {
         for(j=i-1;j>=0;j--)
             if(a[j]<a[i])
                break;
         left_idx = j;
         for(j=i+1;j<n;j++)
             if(a[j]<a[i])
               break;
         right_idx = j;
         ans = max(ans,((long long int)a[i])*(right_idx-left_idx-1));
      }
      cout<<ans<<endl;
   }
}
