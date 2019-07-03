#include <iostream>
#include <algorithm>

using namespace std;

const int INF=1E9+10;

int main (){
	int n,m=INF,x;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> x;
		m=min(m,x);
	}
	if (m==1)
		cout << -1;
	else
		cout << 1;
}