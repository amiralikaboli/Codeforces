#include <iostream>

using namespace std;

const int INF=1E9+7;

int main(){
	int n,k;
	cin >> n >> k;
	int mx=-INF;
	for (int i=0;i<n;++i){
		int f,t;
		cin >> f >> t;
		if (t>k)
			mx=max(mx,f-t+k);
		else
			mx=max(mx,f);
	}
	cout << mx;
}