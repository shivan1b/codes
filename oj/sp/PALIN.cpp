/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

bool isPalindrome(string s){
     int l=s.length();
     int j=l-1;
     int mid=l/2;
     for(int i=0;i<mid;)
          if(s[i++]!=s[j--])
               return false;
     return true;
}
bool CheckBigger(string m, string s){
     int l=s.length()-1;
     int mid=s.length()/2;
     int j=mid;
     bool p=false;
     for(int i=mid;i<=l;i++)
          if(m[i]>s[i])
               return true;
          else if(m[i]<s[i])
               return false;
}
void MakePalindromeAgain(string s){
     string m=s;
     int j,mid;
     j=s.length()-1;
          mid=s.length()/2;
     for(int i=0;i<mid && j>=mid;)
          m[j--]=m[i++];
     cout<<m<<"\n";
}
void MakeBigger(string m){
     int mid=m.length()/2;
     if(m[mid]!='9'){
          if(m.length()%2!=0)
               m[mid]++;
          else{
               if(m[mid-1]<=m[mid])
                    m[mid-1]++;
          }
          MakePalindromeAgain(m);
     }
     else{
          int i=mid;
          while(i>=0 && m[i]=='9')
               m[i--]='0';
          if(i>=0)
               m[i]++;
          else
               m.insert(m.begin(),'1');
          MakePalindromeAgain(m);
     }
}
void MakePalindrome(string s)
{
     string m=s;
     int j=s.length()-1;
     int mid=s.length()/2;
     for(int i=0;i<mid && j>=mid;)
          m[j--]=m[i++];
     if(CheckBigger(m,s))
          cout<<m<<"\n";
     else
          MakeBigger(m);
}
int main()
{
     int T;
     string s;
     cin>>T;
     while(T--)
     {
          cin>>s;
          if(isPalindrome(s))
               MakeBigger(s);
          else
               MakePalindrome(s);
     }
}
