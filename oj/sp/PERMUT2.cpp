/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>
#define fio std::ios_base::sync_with_stdio(false)
#define ll long long
#define inp(x) std::cin>>x

ll A[100005],B[100005];

int main()
{
    ll n;
    fio;
    while(1)
    {
        inp(n);

        if(n==0)
            break;

        for(ll i=1;i<=n;i++)
            inp(A[i]);

        for(ll i=1;i<=n;i++)
            B[A[i]]=i;

        if (std::equal(A, A + n, B))
            std::cout<<"ambiguous\n";
        else
            std::cout<<"not ambiguous\n";
    }
	return 0;
}
