#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ans=0;
	int t=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (t==0 && x==-1)
			++ans;
		else if (x==-1 && t!=0)
			--t;
		else if (x>=0)
			t+=x;
	}
	cout << ans;
}