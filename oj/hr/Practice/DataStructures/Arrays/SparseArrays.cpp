#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,int> mp;
    int n,q;
    
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        mp[s]++;
    }
    
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<mp[s]<<"\n";
    }
    
    return 0;
}
