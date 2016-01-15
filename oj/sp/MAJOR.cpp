/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int64_t i,n,l,t,p;
     cin>>t;
     while(t--){
          map<int64_t,int64_t> mp;
          bool q=false;
          cin>>n;
          i=n;
          while(i--){
               cin>>p;
               mp[p]++;
               if(mp[p]>n/2)
                    q=true,l=p;
          }
          if(q) cout<<"YES "<<l<<"\n";
          else cout<<"NO\n";
     }
}
