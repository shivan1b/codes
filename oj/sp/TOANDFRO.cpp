/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n && n){
        string s;
       cin>>s;
       string sClone(s);
        int l=s.length();
        int r=l/n;
        for(int i=0;i<l;i++){
            int c=i/n;
            int p = (((c&1)==0) ? i%n : n-(i%n)-1);
            sClone[p*r+c]=s[i];
        }
        cout<<sClone<<"\n";
    }
	return 0;
}
