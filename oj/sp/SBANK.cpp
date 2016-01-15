/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

int main()
{
     int t;
     long n;
     cin>>t;
     while(t--){
          map<string,int> BankAcc;
          map<string,int>::iterator it;
          int c;
          cin>>n;
          cin.ignore();
          string s;
          for(int i=0;i<n;i++)
               getline(cin,s),BankAcc[s]++;
          for(it=BankAcc.begin();it!=BankAcc.end();it++)
               cout<<it->first<<" "<<it->second<<"\n";
          cout<<"\n";
     }
}
