/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
using namespace std;

int main()
{
     int t,n;
     cin>>t;
     while(t--){
          cin>>n;
          int a[n],c=0;
          for(int i=0;i<n;i++)
               cin>>a[i];
          for(int i=0;i<n;i++)
               for(int j=i+1;j<n;j++)
                    if(a[i]>a[j])
                         swap(a[i],a[j]),c++;
          /*for(int i=0;i<n;i++)
               cout<<a[i]<<" ";
  */        cout<<"Optimal train swapping takes "<<c<<" swaps.\n";
     }
}
