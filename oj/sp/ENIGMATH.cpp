/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>

using namespace std;

int64_t gcd(int64_t a, int64_t b){
     if(b==0)
          return a;
     return gcd(b,a%b);
}
int main()
{
     ios_base::sync_with_stdio(false);
     int t;
     int64_t a,b;
     cin>>t;
     while(t--){
          cin>>a>>b;
          int64_t p=gcd(a,b);
          while(p!=1){
               a=a/p;
               b=b/p;
               p=gcd(a,b);
          }
          cout<<b<<" "<<a<<"\n";
     }
}
