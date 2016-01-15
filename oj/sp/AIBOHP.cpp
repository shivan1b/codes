/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<algorithm>

using namespace std;

int LCS(string s, string r){        //Finding Longest Common Subsequence as deleting this from length of the string will be the answer
     int m=s.length();
     int a[m+1],b[m+1];
     for(int i=0;i<=m;i++)
          a[i]=0,b[i]=0;
     for(int i=1;i<=m;i++)
     {
          for(int j=1;j<=m;j++)
          {
               if(s[i-1]==r[j-1])
                    b[j]=a[j-1]+1;
               else
                    b[j]=max(b[j-1],a[j]);
          }
          for(int j=0;j<=m;j++)
               a[j]=b[j];
     }
     return b[m];
}
int main()
{
     int t;
     string s,r;
     cin>>t;
     while(t--){
          cin>>s;
          r=s;
          reverse(s.begin(),s.end());
          cout<<s.length()-LCS(r,s)<<"\n";
     }
}
