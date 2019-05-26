#include <iostream>

using namespace std;

int main (){
	int n,m;
	cin >> n >> m;
	int ans=0;
	for (int i=0;i*i<=m;++i){
		int x=m-i*i;
		if (x*x+i==n)
			++ans;
	}
	cout << ans;
}