/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<fstream>

using namespace std;

bool CheckUpper(string s)
{
     int l=s.length();
     for(int i=0;i<l;i++)
          if(isupper(s[i]))
               return true;
     return false;
}
void cppTOjava(string s)
{
     int p,l=s.length();
     p=s.find('_');
     while(p!=string::npos)
     {
          if(p==l)
               s.erase(p,1);
          else{
               s.erase(p,1);
               s[p]=toupper(s[p]);
               p=s.find('_');
          }
     }
     cout<<s<<"\n";
}
void javaTOcpp(string s)
{
     int l=s.length(),c=0;
     for(int i=1;i<l+c;i++)
          if(isupper(s[i]))
               s.insert(i,1,'_'), i++, c++;
     for(int i=1;i<l+c;i++)
          s[i]=tolower(s[i]);
     cout<<s<<"\n";
}
bool ErrorCheck(string s)
{
     int l=s.length();
     bool p=false;
     if(s[0]=='_' || isupper(s[0]) || s[s.length()-1]=='_'  || !isalpha(s[0]))
          return true;
     for(int i=0;i<l;i++)
     {
          if(!isalpha(s[i]) && s[i]!='_')
               return true;
          if(s[i]=='_' && p==true)
               return true;
          if(s[i]=='_') p=true;
          else p=false;
     }
     return false;
}
int main()
{
     ifstream infile;
     string s;
     bool u;
     int f;
     while(infile>>s)
     {
          u=CheckUpper(s);
          f=s.find('_');
          if(ErrorCheck(s) || (f!=string::npos && u))
               cout<<"Error!\n";
          else if(f!=string::npos && !u)
               cppTOjava(s);
          else if(u && f==string::npos)
               javaTOcpp(s);
          else if(!u && f==string::npos)
               cout<<s<<"\n";
     }
}
