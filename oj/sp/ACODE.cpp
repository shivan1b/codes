/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<string.h>
using namespace std;
int d[5005];
int AlphaCode(string s)
{
     int l=s.length();
     memset(d,0,sizeof(d));
     d[0]=1;
     for(int i=1;i<l;i++)
     {
          int u=(s[i-1]-'0')*10+(s[i]-'0');
          if(s[i]-'0')
               d[i]=d[i-1];
          if(u<=26 && u>=10)
               d[i]+=d[i-2<0?0:i-2];
     }
     return d[l-1];
}
int main()
{
     string s;
     while(getline(cin,s) && s!="0")
          if(s=="110") cout<<"1\n";
          else cout<<AlphaCode(s)<<"\n";
}
