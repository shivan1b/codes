/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;
int m[102][102];

int main()
{
     ios_base::sync_with_stdio(false);
     int T,h,w;
     cin>>T;
     while(T--)
     {
          int mx=INT_MIN;
          cin>>h>>w;
          for(int i=1;i<=h;i++)
               m[i][0]=0,m[i][w+1]=0;
          for(int i=1;i<=h;i++)
               for(int j=1;j<=w;j++)
                    cin>>m[i][j];
          for(int i=h-1;i>=1;i--)
          {
               for(int j=1;j<=w;j++)
               {
                    m[i][j]+=max(m[i+1][j],max(m[i+1][j-1],m[i+1][j+1]));
                    if(m[i][j]>mx) mx=m[i][j];
               }
          }
          cout<<mx<<"\n";
     }
}
