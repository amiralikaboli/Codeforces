#include <iostream>

using namespace std;

int main (){
	int n,m,mx=-1,ind;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (mx<=(x+m-1)/m){
			mx=(x+m-1)/m;
			ind=i+1;
		}
	}
	cout << ind;
}