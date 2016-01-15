/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;
int k[102][102];

int main()
{
     ios_base::sync_with_stdio(false);
     int T,n,m;
          int mn=9999999;
          cin>>n>>m;
          for(int i=1;i<=n;i++)
               k[i][0]=9999999,k[i][m+1]=9999999;
          for(int i=1;i<=n;i++)
               for(int j=1;j<=m;j++)
                    cin>>k[i][j];
          for(int i=n-1;i>=1;i--)
               for(int j=1;j<=m;j++)
                    k[i][j]+=min(k[i+1][j],min(k[i+1][j-1],k[i+1][j+1]));
          for(int j=1;j<=m;j++)
               if(k[1][j]<mn)
                    mn=k[1][j];
          cout<<mn<<"\n";
}
