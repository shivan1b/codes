/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
     int t,n,m;
     cin>>t;
     while(t--){
          cin>>n>>m;
          n-=2;
          m-=2;
          int ans=ceil((double)n/3) * ceil((double)m/3);
          cout<<ans<<"\n";
     }
}
