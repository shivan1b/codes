/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstdio>
#include<map>

using namespace std;

int main()
{
     int t,n,p,val;
     char a;
     cin>>t;
     while(t--){
          map<char,int> mp;
          int sum=0;
          cin>>n;
          for(int i=0;i<n;i++){
               cin>>a>>val;
               mp[a]=val;
               //cout<<"mp["<<a<<"]  =  "<<mp[a]<<"  ";
          }
          cin>>p;
          cin.ignore();
          string s;
          for(int i=0;i<p;i++){
               getline(cin,s);
              // cout<<s<<"\n";
               int l=s.length();
               for(int i=0;i<l;i++)
                    if(mp.find(s[i])!=mp.end())
                         sum+=mp[s[i]];
          }
          int cent=sum%100;
          cout<<sum/100<<"."<<(cent>9?"":"0")<<cent<<"$\n";
     }
}
