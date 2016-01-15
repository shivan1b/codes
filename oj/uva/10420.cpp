/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

int main()
{
     string s;
     map<string,int> mp;
     map<string,int>::iterator it;
     int t;
     cin>>t;
     cin.ignore();
     while(t--){
          getline(cin,s);
          int p=s.find(' ');
          string st=s.substr(0,p);
          mp[st]++;
     }
     for(it=mp.begin();it!=mp.end();it++)
          cout<<it->first<<" "<<it->second<<"\n";
}
