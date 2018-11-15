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
         for(i=1;i<n-1;i++)
         {
            greater = a[i];
            for(j=0;j<i;j++)
               if(a[j]>greater)
                 greater = a[j];
            
            left_greater = greater;
            greater = a[i];
            
            for(j=i+1;j<n;j++)
               if(a[j]>greater)
                 greater = a[j];

            right_greater = greater;

            ans+=(min(left_greater,right_greater) - a[i]);   
           
         }
        
         cout<<ans<<endl;
    }
}
