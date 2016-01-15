/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     long long t,n,i=1;
     cin>>t;
     while(i<=t){
          cin>>n;
          long long a[n];
          for(int i=0;i<n;i++)
               cin>>a[i];
          if(n==2)
               a[1]=max(a[0],a[1]);
          else{
          a[2]=max(a[2]+a[0],a[1]);
          for(int i=3;i<n;i++){
               a[i]=max(a[i]+max(a[i-2],a[i-3]),a[i-1]);
          }
                 }
          if(n==0)
               cout<<"Case "<<i<<": 0\n";
          else
               cout<<"Case "<<i<<": "<<a[n-1]<<"\n";
          i++;
     }
}
