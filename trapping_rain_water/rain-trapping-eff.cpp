#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,greater,left_greater,right_greater;
    long long int ans;
    cin>>t;  
    while(t--)
    {
         cin>>n;
         int a[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         ans = 0;
         int left_max[n],right_max[n];
         left_max[0] = a[0] , right_max[n-1] = a[n-1];
         for(i=1,j=n-2;i<n;i++,j--)
         {
            left_max[i]  = max(a[i],left_max[i-1]);
            right_max[j] = max(a[j],right_max[j+1]);
         } 
         for(i=0;i<n;i++)
            ans+=min(left_max[i],right_max[i])-a[i];
         cout<<ans<<endl;
    }
}
