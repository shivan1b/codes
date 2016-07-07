/*
 * Created by
 * Shivani Bhardwaj <shivanib134@gmail.com>
 */

#define CHSORT(f,s) bool f(int x, int y) { if(x s y) return true; else return false;}
#include<iostream>

using namespace std;

CHSORT(asc,<)
CHSORT(desc,>)

bool isSorted(int n, int *A, char sym)
{
	if(n==1)
		return true;

	if(sym=='A')
		return asc(A[n-2],A[n-1]) ? isSorted(n-1,A,sym) : 0;

	return desc(A[n-2],A[n-1]) ? isSorted(n-1,A,sym) : 0;
}

int main()
{
	int l;
	char inp;
	bool check;

	cout<<"Enter the length of array: ";
	cin>>l;

	int A[l];

	for(int i=0;i<l;i++){
		cout<<"\nEnter element "<<i+1<<": ";
		cin>>A[i];
	}

	cout<<"\nCheck for ascending? Press A.\nCheck for descending? Press D.\n";
	cin>>inp;
	if(inp=='A' || inp=='D') {
		check=isSorted(l,A,inp);
		
		if(check)
			cout<<"Array is sorted.\n";
		else
			cout<<"Alas! Array is not sorted (may be chosen order), you might want to use the inbuilt sort() ;)\n";
		}
	else
		cout<<"I am not configured to sort in this order as of now. :(\n";

}
