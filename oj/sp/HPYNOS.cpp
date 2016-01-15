/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;
int64_t c=0;
int64_t happy(int64_t n)
{
     int a,b=0;
     while(n)
     {
          a=n%10;
          b+=(a*a);
          n/=10;
     }
     c++;
     if(b==1)
          return c;
     if(b/10==0)
          return -1;
     return happy(b);
}
int main()
{
     int64_t N;
     cin>>N;
     if(N==1) cout<<"0\n";
     else cout<<happy(N);
}
