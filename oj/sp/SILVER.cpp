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
          int c=0;
          while(n>1)
               n=n>>1,c++;
          cout<<c<<"\n";
     }
}
