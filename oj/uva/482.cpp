/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main()
{
     int t,a,i=0;
     string s1,s2;
     cin>>t;
     cin.ignore();
     while(t--){
          int idx;
          i++;
          cin.ignore();
          if(i>1)
               cout<<"\n";
          vector<pair<int, string>> v;
          vector<pair<int, string>>::iterator it;
          getline(cin,s1);
          getline(cin,s2);
          stringstream ss1,ss2;
          ss1<<s1;
          ss2<<s2;
          while(ss1>>idx && ss2>>s2)
               v.push_back(make_pair(idx,s2));
          sort(v.begin(),v.end());
          for(it=v.begin();it!=v.end();it++)
             cout<<it->second<<"\n";
     }
}
