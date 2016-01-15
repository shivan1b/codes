/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<map>
using namespace std;

map<string,int> SliceCount;

int SpecialCase2(string s)
{
     int c=SliceCount[s];
     if(c%2==0)
          SliceCount[s]=0;
     else
          SliceCount[s]=1;
     return c/2;
}
int SpecialCase4(string s)
{
     int c=SliceCount[s];
     if(c%4==0){
          SliceCount[s]=0;
          return c/4;
     }
     else{
          SliceCount[s]=c%4;
          return c/4+1;
     }
}
int Pizza(string s,int k)
{
     int c=0;
     while(SliceCount[s])
     {
          c++;
          if(SliceCount["1/4"]>=k)
               SliceCount["1/4"]-=k;
          else
               SliceCount["1/4"]=0;
          SliceCount[s]-=1;
     }
     return c;
}
int main()
{
     int n;
     string s;
     cin>>n;
     while(n--){
          cin>>s;
          SliceCount[s]++;
     }
     cout<<Pizza("3/4",1)+SpecialCase2("1/2")+Pizza("1/2",2)+SpecialCase4("1/4")+1<<"\n";
}
