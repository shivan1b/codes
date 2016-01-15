/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<bits/stdc++.h>

#define fio std::ios_base::sync_with_stdio(false)
#define ll long long
#define inp(x) std::cin>>x
#define MAX 1000000000

bool isPrime[MAX];
int sqtMAX=sqrt(MAX);
int sqt2MAX=sqrt(sqtMAX);
void SieveOfEratosthenes()
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for(ll i =2;i<=sqt2MAX;i++){
        if(isPrime[i]){
            for(ll j=i*i;j<sqtMAX;j+=i){
                if(isPrime[j])
                    isPrime[j]=false;
            }
        }
    }
}
void SegmentedSieve(int a,int b)
{
    int sqtb=sqrt(b);
    for(ll i=2;i<=sqtb;i++)
        if(isPrime[i])
        {
                for(ll j=a - a%i;j<=b;j+=i){
                    if(j>=a && j!=i && isPrime[j])
                        isPrime[j]=false;
            }
        }
}
int main()
{
    fio;
    SieveOfEratosthenes();
    int t;
    ll m,n;
    inp(t);
    while(t--)
    {
        inp(m); inp(n);
        if(n>sqt2MAX)
            SegmentedSieve(m,n);
        for(ll i=m;i<=n;i++)
            if(isPrime[i])
                std::cout<<i<<"\n";
    }
	return 0;
}
