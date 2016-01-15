/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int t,n,m,D,k;
     cin>>t;
     while(t--){
          int c=0;
          cin>>n>>m>>D;
          while(n--){
               cin>>k;
               if(k>D)
                    c=c+((k-1)/D);
          }
          if(c>=m)
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
