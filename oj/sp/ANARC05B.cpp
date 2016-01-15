/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

int main()
{
     int n,m,p;
     while(cin>>n && n!=0){
          int a[n];
          int sumA[n];
          int sum=0;
          map<int, int> mp;
          cin>>a[0];
          sumA[0]=a[0];
          mp[a[0]]=0;
          for(int i=1;i<n;i++){
               cin>>a[i];
               sumA[i]=a[i]+sumA[i-1];
               mp[a[i]]=i;
          }
          cin>>m;
          int b[m],posA,posB;
          int sumB[m];
          bool p=false;
          cin>>b[0];
          sumB[0]=b[0];
          if(mp.count(b[0])==1){
                         sum=sum+max(sumA[mp.at(b[0])],sumB[0]);
                         p=true;
                         posA=mp.at(b[0]);
                         posB=0;
               }
          for(int i=1;i<m;i++){
               cin>>b[i];
               sumB[i]=b[i]+sumB[i-1];
               if(mp.count(b[i])==1){
                    if(!p){
                         sum=sum+max(sumA[mp.at(b[i])],sumB[i]);
                         p=true;
                    }
                    else
                         sum=sum+max(sumA[mp.at(b[i])]-sumA[posA],sumB[i]-sumB[posB]);
                    posA=mp.at(b[i]);
                    posB=i;
               }
          }
          if(p)
               sum=sum+max(sumA[n-1]-sumA[posA],sumB[m-1]-sumB[posB]);
          else
               sum=sum+max(sumA[n-1],sumB[m-1]);
          cout<<sum<<"\n";
     }
}
