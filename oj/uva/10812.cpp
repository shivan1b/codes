/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int n,s,d;
     cin>>n;
     while(n--){
          cin>>s>>d;
          if(s==0 && d==0)
               cout<<"0 0\n";
          else if(d>=s || (d%2!=0 && s%2==0) || (s%2!=0 && d%2==0))
               cout<<"impossible\n";
          else{
               int p=(s+d)/2;
               cout<<p<<" "<<s-p<<"\n";
          }
     }
}
