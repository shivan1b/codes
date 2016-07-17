#include<iostream>
#include<cstring>

using namespace std;

int mx=0;
int dir[][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

int getval(int m, int n, int *A, int r, int c){
	if(m>=r || m<0 || n>=c || n<0)
		return 0;
	return *(A+m*c+n);
}

void MaxConnCells(int m, int n, int *A, int r, int c, bool *vis, int& mxc){
	*(vis+m*c+n)=true;
	mxc++;
	if(mxc>mx)
		mx=mxc;

	for(int i=0;i<8;i++){
		int in=m+dir[i][0];
		int jn=n+dir[i][1];


		if(getval(in,jn,A,r,c) && !*(vis+in*c+jn))
			MaxConnCells(in,jn,(int *)A,r,c,(bool *)vis,mxc);
	}
}

void findMaxConn(int *A, int r, int c){
	int mxc=0;
	bool vis[r][c];
	memset(vis,0,sizeof(bool)*r*c);
	
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			if(*(A+i*c+j) && !vis[i][j]){
				mxc=0;
				MaxConnCells(i,j,(int *)A,r,c,(bool *)vis,mxc);
				}
		}
	cout<<"\nMaximum number of connected cells: "<<mx<<"\n";
}

int main()
{
	int r,c;
	cout<<"Enter the dimensions of grid _row_ _column_: ";
	cin>>r>>c;

	int A[r][c];

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			cout<<"\nEnter element ["<<i<<"]["<<j<<"]:";
			cin>>A[i][j];
		}
	findMaxConn((int *)A,r,c);
}
