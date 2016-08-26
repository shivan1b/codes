#include<vector>
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the length of the  sequence:";
	cin>>n;
	int a[n];

	cout<<"\nEnter the elements of the sequence:";

	for(int i=0;i<n;i++)
		cin>>a[i];

	vector<vector<int> > v(n);
	v[0].push_back(a[0]);

	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if((a[j] < a[i]) && (v[i].size() < v[j].size()))
				v[i]=v[j];
		}
		v[i].push_back(a[i]);
	}

	int mx=-1,id;
	for(int i=0;i<n;i++){
		int p=v[i].size();
		if(p > mx)
			mx=v[i].size(),id=i;}
	
	cout<<"Longest Increasing subsequence is:\n";
	for(int i=0;i<mx;i++)
		cout<<v[id][i]<<" ";
}
