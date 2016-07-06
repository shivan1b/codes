#include <iostream>

using namespace std;

void TowersOfHanoi(int n, char from, char to, char aux){
	if(n==1) {
		cout<<"Moving disk 1 from peg "<<from<<" to peg "<<to<<".\n";
		return;
	}

	TowersOfHanoi(n-1,from,aux,to);

	cout<<"Moving disk "<<n<<" from peg "<<from<<" to peg "<<to<<".\n";

	TowersOfHanoi(n-1,aux,to,from);
}

int main()
{
	int disks;

	cout<<"Enter the number of disks:\n";
	cin>>disks;
	TowersOfHanoi(disks, 'A', 'B', 'C');
}
