#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int seed = 100;

int myRandom(int lower,int upper)
{
   int num = (rand() % (upper - lower + 1)) + lower;
   return num;
}

int main()
{
    srand(seed);
    //int t = myRandom(1,100);
    int t = 100;
    cout<<t<<endl;
    while(t--)
    {
         int n = myRandom(100,1000);
         cout<<n<<endl;
         while(n--)
             cout<<myRandom(0,100000)<<" ";
         cout<<endl;
    }
    return 0;
}

