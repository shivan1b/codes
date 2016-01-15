/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>

using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     int t;
     long N,K,T,F;
     cin>>t;
     while(t--){
          cin>>N>>K>>T>>F;
          cout<<N+(F-N)*K/(K-1)<<"\n";
     }
}
