/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#define MOD 1000007
using namespace std;

int main()
{
     int T;
     uint64_t N,r,s;
     cin>>T;
     while(T--)
     {
          cin>>N;
          r=N*(N+1);
          r%=MOD;
          s=N*(N-1);
          s/=2;
          s%=MOD;
          r+=s;
          r%=MOD;
          cout<<r<<"\n";
     }
}
