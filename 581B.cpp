#include <iostream>

using namespace std;

const int MaxN=1E5+10;
int h[MaxN];
int t[MaxN];
int mx[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> h[i];
	mx[n-1]=0;
	t[n-1]=1;
	for  (int i=n-2;i>=0;--i)
		mx[i]=max(mx[i+1],h[i+1]);
	for (int i=0;i<n;++i)
		if (mx[i]<h[i])
			cout << 0 << " ";
		else
			cout << mx[i]-h[i]+1 << " ";
}