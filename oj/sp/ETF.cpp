/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int EulerTotient(int n){
     int ans=n;
     for(int i=2;i*i<=n;i++){
          if(n%i==0)
               ans=ans-ans/i;
          while(n%i==0)
               n=n/i;
     }
     if(n>1)
          ans=ans-ans/n;
     return ans;
}
int main()
{
     ios_base::sync_with_stdio(false);
     int t;
     int32_t n;
     cin>>t;
     while(t--){
          cin>>n;
          cout<<EulerTotient(n)<<"\n";
     }
}
