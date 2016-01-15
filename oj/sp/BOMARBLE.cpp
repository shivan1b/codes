/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>

using namespace std;

int main()
{
     int n;
     while(cin>>n && n!=0){
          int sum=2,a=2;
          int i=2;
          while(i<=n){
               a=a+3;
               sum=sum+a;
               i++;
          }
          sum=sum+2*n+1;
          cout<<sum<<"\n";
     }
}
