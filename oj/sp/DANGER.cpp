/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cmath>
using namespace std;

int64_t LowPowTwo(int64_t n){
     int64_t a=1;
     while(a<=n)
          a=a<<1;
     return a>>1;
}
int main()
{
     string s;
     while(cin>>s && s!="00e0"){
          int64_t num=s[0]-'0';
          num=num*10;
          num=num+(s[1]-'0');
          num=num*pow(10,s[3]-'0');
          int64_t p=LowPowTwo(num);
          p=1+(num-p)*2;
          cout<<p<<"\n";
     }
}
