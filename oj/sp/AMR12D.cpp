/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>

using namespace std;

bool isPalindrome(string s){
     int l=s.length();
     int j=l-1;
     for(int i=0;i<l/2 && j>=l/2;i++)
          if(s[i]==s[j])
               j--;
          else
               return false;
     return true;
}
int main()
{
     ios_base::sync_with_stdio(false);
     int t;
     string s;
     cin>>t;
     while(t--){
          cin>>s;
          if(isPalindrome(s))
               cout<<"YES\n";
          else
               cout<<"NO\n";
     }
}
