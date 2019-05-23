#include <iostream>

using namespace std;

int d[111];

int main (){
	int n,a,b,ans=0;
	cin >> n;
	for (int i=0;i<n-1;++i)
		cin >> d[i];
	cin >> a >> b;
	--a;
	--b;
	for (int i=a;i<b;++i)
		ans+=d[i];
	cout << ans;
}