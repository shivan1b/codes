#include<iostream>
#include<cstring>
using namespace std;

/*void print(string s1, int n, int m, int i, int j, char *P){
	if(i==0||j==0)
		return;
	if(*(P+m*i+j)=='L'){
		print(s1,n,m,i-1,j-1,P);
		cout<<s1[i];
	}
	else if(*(P+m*i+j)=='N')
		print(s1,n,m,i-1,j,P);
	else
		print(s1,n,m,i,j-1,P);
}
*/
void LCS(string s1, string s2){
	int l1=s1.length();
	int l2=s2.length();
	int p;
	int L[l1+1][l2+1];
	char P[l1+1][l2+1];

	for(int i=0;i<=l1;i++)
		for(int j=0;j<=l2;j++){
			if(i==0 || j==0)
				L[i][j]=0;
			else{
			       	if(s1[i-1]==s2[j-1])
					L[i][j]=L[i-1][j-1]+1,P[i][j]='L';
				else if(L[i-1][j]>L[i][j-1])
					L[i][j]=L[i-1][j],P[i][j]='N';
				else
					L[i][j]=L[i][j-1],P[i][j]='W';
			}
		}

	cout<<" has a length of "<<L[l1][l2];

	cout<<"\n LCS is ";
	
	//print(s1,l1,l2,l1,l2,(char *)P);
	//
	int i=l1,j=l2;
	string s="";

	while(i>0 && j>0){
		if(s1[i-1]==s2[j-1]){
			s.insert(0,1,s1[i-1]);
			i-=1;
			j-=1;	
		}
		else if(L[i-1][j] > L[i][j-1])
			i--;
		else
			j--;
	}

	cout<<s<<"\n";
}

int main()
{
	string s1, s2;

	cout<<"Enter the two strings:";
	cin>>s1>>s2;

	cout<<"Longest common subsequence in the given strings ";
	LCS(s1,s2);
}
