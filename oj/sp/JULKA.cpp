/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

void Print(int * A, int l)
{
     bool dig=false;
     for(int i=1;i<=l;i++) {
          if(A[i]!=0)
               dig=true;
          if(dig) cout<<A[i];
     }
     cout<<"\n";
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
void DivisionByTwo(int * A, int l)
{
     int c=0;
     for(int i=1;i<=l;i++)
     {
          A[i]=A[i]+c*10;
          if(A[i]<2){
               c=A[i];
               A[i]=A[i]-c;
          }
          else{
               c=A[i]%2;
               A[i]=A[i]/2;
          }
     }
  }
void Julka(int* A, int* B, int * C,int l)
{
     Subtraction(A,B,l);
     DivisionByTwo(A,l);
     Subtraction(C,A,l);
     Print(C,l);
     Print(A,l);
}
int main()
{
     int A[101],B[101],C[101];
     string k,tot;
     while(cin>>tot>>k){
          int l1=tot.length();
          int l2=k.length();
          int p=l2;
          while(p!=l1){
               k.insert(k.begin(),'0');
               p++;
          }
          for(int i=1;i<=l1;i++)
               A[i]=tot[i-1]-'0';
          for(int i=1;i<=l1;i++)
               B[i]=k[i-1]-'0';
          for(int i=1;i<=l1;i++)
               C[i]=A[i];
          Julka(A,B,C,l1);
    }
}
