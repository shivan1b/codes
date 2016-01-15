/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
     int t,sal,p=0;
     cin>>t;
     while(t--){
          p++;
          int a[3];
          for(int i=0;i<3;i++)
               cin>>a[i];
          sort(a,a+3);
          cout<<"Case "<<p<<": "<<a[1]<<"\n";
     }
}
