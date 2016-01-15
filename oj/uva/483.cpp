/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
     string s;
     while(getline(cin,s)){
          int l=s.length();
          size_t dummyPos,pos=s.find(' ');
          if(pos==string::npos)
               for(int i=l-1;i>=0;i--)
                    cout<<s[i];
          else{
               for(int i=pos-1;i>=0;i--)
                    cout<<s[i];
               cout<<" ";
               dummyPos=pos;
               pos=s.find(" ",pos+1,1);
               while(pos!=string::npos){
                    for(int i=pos-1;i>=dummyPos+1;i--)
                         cout<<s[i];
                    cout<<" ";
                    dummyPos=pos;
                    pos=s.find(" ",pos+1,1);
               }
               for(int i=l-1;i>=dummyPos+1;i--)
                    cout<<s[i];
               }
          cout<<"\n";
     }
}
