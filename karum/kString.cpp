#include<iostream>
#include<cmath>

using namespace std;


char s[1000000];

void kString(int n, int k){
	if(n<1)
		cout<<s<<"\n";
	else
		for(int i=1;i<=k;i++){
			s[n-1]=(char)i+'0';
			kString(n-1,k);
		}
}

int main()
{
	int n,k;

	cout<<"Enter the length of string: ";
	cin>>n;
	cout<<"Enter the k: ";
	cin>>k;
	cout<<"\nFollowing are the possible "<<pow(k,n)<<" strings:\n";
	kString(n,k);
}
