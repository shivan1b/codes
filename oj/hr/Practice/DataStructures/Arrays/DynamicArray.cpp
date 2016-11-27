#include<iostream>
#include<vector>

using namespace std;

int main()
{
        long long n,lastAns=0,q,x,y,qn;
        cin>>n>>q;
        vector<vector<long long> > v(n);
        while(q--){
                cin>>qn>>x>>y;
                long long i=(x^lastAns)%n;
                if(qn==1)
                        v[i].push_back(y);
                else{
                        lastAns=v[i].at(y%v[i].size());
                        cout<<lastAns<<"\n";
                }
        }
}
