#include<iostream>

using namespace std;

int main()
{
	string s1,s2;
	cout<<"Enter the two strings:";
	cin>>s1>>s2;

	int l1=s1.length();
	int l2=s2.length();

	int d[l1+1][l2+1];

	for(int i=0;i<=l1;i++)
		for(int j=0;j<=l2;j++){
			if(i==0)
				d[0][j]=j;
			else if(j==0)
				d[i][0]=i;

			else if(s1[i-1]==s2[j-1])
				d[i][j]=d[i-1][j-1];
			else
				d[i][j]=1+min(d[i-1][j],min(d[i][j-1],d[i-1][j-1]));
		}

	cout<<"Edit distance is "<<d[l1][l2]<<".\n";
}
