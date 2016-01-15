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
     int c=1;
     while(getline(cin,s)){
          size_t pos=s.find("\"");
          while(pos!=string::npos){
               if((c&1)==1)
                    s.replace(pos,1,"``");
               else
                    s.replace(pos,1,"''");
               c++;
               pos=s.find("\"",pos+1,1);
          }
          cout<<s<<"\n";
     }
}
