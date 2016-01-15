/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int64_t b,t,a,c;
     string d;
     cin>>t;
     cin.ignore();
     while(t--)
     {
          a=1;
          cin>>d>>b;
          c=d[d.length()-1]-'0';
          if(b==0)
               cout<<"1\n";
          else{
               b=b%4>0?b%4:4;
               for(int i=0;i<b;i++)
                    a*=c;
               cout<<a%10<<"\n";
          }
     }
}
