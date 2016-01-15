/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

void Print(int * A, int l)
{
     bool dig=false;
     for(int i=0;i<=l;i++) {
          if(A[i]!=0)
               dig=true;
          if(dig) cout<<A[i];
     }
     cout<<"\n";
}
void MultByTwo(int * A, int l)
{
     int carry=0,tmp;
     for(int i=l;i>=1;i--)
     {
          A[i]=A[i]*2;
          A[i]=A[i]+carry;
          tmp=A[i]%10;
          carry=A[i]/10;
          A[i]=tmp;
     }
     A[0]=carry;
}
void Subtraction(int * A, int * B, int l)
{
     int borrow=0;
     for(int i=l;i>=1;i--)
     {
          A[i]=A[i]-borrow;
          if(A[i]<B[i])
               A[i]=10+A[i],borrow=1;
          else borrow=0;
          A[i]=A[i]-B[i];
     }
}
void Bishops(int * A, int * B, int l)
{
     Subtraction(A,B,l);
     MultByTwo(A,l);
     Print(A,l);
}
int main()
{
     string s1,s2;
     while(cin>>s1)
     {
          if(s1=="0")
               cout<<"0\n";
          else if(s1=="1")
               cout<<"1\n";
          else{
               int l=s1.length();
               s2="1";
               int p=1;
               while(p!=l){
                    s2.insert(s2.begin(),'0');
                    p++;
               }
               int A[l+1],B[l+1];
               for(int i=1;i<=l;i++)
                    A[i]=s1[i-1]-'0';
               for(int i=1;i<=l;i++)
                    B[i]=s2[i-1]-'0';
               Bishops(A,B,l);
          }
     }
}
