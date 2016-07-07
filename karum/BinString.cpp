/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#include<iostream>
#include<cmath>

using namespace std;

char s[1000000];

void BinString(int n){
	if(n<1)
		cout<<s<<"\n";
	else{
		s[n-1]='0';
		BinString(n-1);
		s[n-1]='1';
		BinString(n-1);
	}
}

int main()
{
	int n;

	cout<<"Enter the length of binary strings you want to generate: ";
	cin>>n;
	cout<<"\nFollowing are the "<<pow(2,n)<<" possible binary strings of length "<<n<<":\n";
	BinString(n);
}
