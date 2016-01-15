/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     string p,s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
     while(getline(cin,p)){
          int l=p.length();
          for(int i=0;i<l;i++){
               size_t t=s.find(p[i]);
               if(p[i]==' ')
                    cout<<' ';
               else if(t!=string::npos)
                    cout<<s[t-1];
          }
          cout<<"\n";
     }
}
