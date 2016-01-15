/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<stack>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
     string s;
     int i=0;
     while(cin>>s && s.find('-')==string::npos){
          i++;
          stack<char> st;
          int change=0;
          int l=s.length();
          for(int i=0;i<l;i++){
               char b=s[i];
               if(!st.empty() && b=='}')
                    st.pop();
               else if(st.empty() && b=='}'){
                    change=change+1;
                    st.push('{');
               }
               else
                    st.push('{');
          }
          if(!st.empty())
               change=change+(st.size()/2);
          cout<<i<<". "<<change<<"\n";
     }
}
