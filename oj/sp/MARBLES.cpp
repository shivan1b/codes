/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int64_t C(int n,int r)
{
     if(r>n-r) r=n-r;
     int64_t a=1;
     for(int i=0;i<r;i++)
          a=a*(n-i)/(i+1);
     return a;
}
int main()
{
     int t,n,k;
     ios_base::sync_with_stdio(false);
     cin>>t;
     while(t--)
     {
          cin>>n>>k;
          cout<<C(n-1,k-1)<<"\n";
     }
}
