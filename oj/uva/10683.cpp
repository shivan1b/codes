/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
     string s;
     int hh,mm,ss,cc,time;
     while(cin>>s){
          hh=(int)(s[0]-'0')*10 + (int)(s[1]-'0');
          mm=(int)(s[2]-'0')*10 + (int)(s[3]-'0');
          ss=(int)(s[4]-'0')*10 +  (int)(s[5]-'0');
          cc=(int)(s[6]-'0')*10 + (int)(s[7]-'0');
      //    cout<<hh<<" "<<mm<<" "<<ss<<" "<<cc<<"\n";
          time=(hh*3600 + mm*60 + ss)*100 + cc;
        //  cout<<time<<"\n";
          time=time*125/108;
          printf("%07d\n",time);
     }
}
