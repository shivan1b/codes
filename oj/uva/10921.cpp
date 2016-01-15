/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     string s,abc="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     while(getline(cin,s)){
          int l=s.length();
          for(int i=0;i<l;i++){
               if(s[i]=='0' || s[i]=='1' || s[i]=='-')
                    cout<<s[i];
               else{
                    int pos=abc.find(s[i]);
                    if(pos==18 || pos==21 || pos==24 || pos==25)
                         cout<<(pos/3)+1;
                    else
                         cout<<(pos/3)+2;
               }
          }
          cout<<"\n";
     }
}
