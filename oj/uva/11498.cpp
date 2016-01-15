/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;
void Nlognia(long x, long y, long m, long n){
     if(x==m || y==n)
          cout<<"divisa\n";
     else if(x>m && y>n)
          cout<<"NE\n";
     else if(x>m && y<n)
          cout<<"SE\n";
     else if(x<m && y>n)
          cout<<"NO\n";
     else
          cout<<"SO\n";
}
int main()
{
     int k;
     long n,m,x,y;
     while(cin>>k && k!=0){
          cin>>m>>n;
          for(int i=0;i<k;i++){
               cin>>x>>y;
               Nlognia(x,y,m,n);
          }
     }
}
