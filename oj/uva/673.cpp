/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<stack>
using namespace std;

int main()
{
     int n;
     string s;
     cin>>n;
     cin.ignore();
     while(n--){
          bool p=false;
          stack<int> st;
          getline(cin,s);
          int l=s.length();
          for(int i=0;i<l;i++){
               if(s[i]!=' '){
               if(s[i]=='(' || s[i]=='[')
                    st.push(s[i]);
               else{
                    if(st.empty()){
                         p=true;
                         break;
                         }
                    else{
                         if(s[i]==')'){
                              if(st.top()=='(')
                                   st.pop();
                              else{
                                   p=true;
                                   break;
                              }
                         }
                         else{
                              if(st.top()=='[')
                                   st.pop();
                              else{
                                   p=true;
                                   break;
                              }
                         }
                    }
               }
          }
          }
          if(p || !st.empty())
               cout<<"No\n";
          else
               cout<<"Yes\n";
     }
}
