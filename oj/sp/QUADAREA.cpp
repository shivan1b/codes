/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
     int T;
     double a,b,c,d,val;
     cin>>T;
     while(T--){
          cin>>a>>b>>c>>d;
          val=(-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d);
          val=sqrt(val);
          val=val/4.0;
          cout<<fixed;
          cout<<setprecision(2)<<val<<"\n";
     }
}
