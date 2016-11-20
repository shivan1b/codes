#include<iostream>
#include<vector>
#include<cstdlib>

using namespace std;

class Heap{
	public:
		vector<int> v;

		void display() {
			for(int i=0;i<v.size();i++)
				cout<<v[i]<<" ";
			cout<<"\n";
		}

		void cascade_up() {
			int l=v.size()-1;
			int p=l/2;

			while(v[l]<v[p] && p>=0) {
				swap(v[l],v[p]);
				l=p;
				p/=2;
			}
		}

		void insert(int e) {
			if(v.empty()) {
				v.push_back(e);
			}
			else {
				v.push_back(e);
				cascade_up();
			}
		}

		void cascade_down() {
			int l=v.size()-2;		//Last element is going to be popped out so keep the size one less than original

			swap(v[0],v[l+1]);		//Swap first and last element of heap
			v.pop_back();			//Delete last element
		
			int c,p=0;
			if(1>l)
				return;
			if(2>l)
				c=1;
			else
				c=v[1]<v[2]?1:2;

			while(v[p]>v[c]) {
				swap(v[p],v[c]);
				p=c;

				if(2*c+1>l)
					break;
				if(2*c+2>l)
					c=c*2+1;
				else
					c=v[2*c+1]<v[2*c+2] ? 2*c+1 : 2*c+2;
			}
		}

		int find_min() {
			int mn=v[0];
			cascade_down();
			return mn;
		}

		bool isempty() {
			if(v.empty())
				return true;
			return false;
		}
	};

int main()
{
	int n,e;
	Heap h;

	cout<<"Enter the number of elements in your heap: ";
	cin>>n;
	cout<<"\nEnter the "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>e;
		h.insert(e);
	}	
	h.display();
	while(!h.isempty())
		cout<<h.find_min()<<"\n";
	cout<<"\n";
}
