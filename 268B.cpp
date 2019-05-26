#include <iostream>

using namespace std;

const int MaxN=2E3+10;
int f[MaxN];

int main(){
	int n;
	cin >> n;
	f[1]=n;
	for (int i=2;i<=n;++i)
		f[i]=f[i-1]+n-i+1+(i-1)*(n-i);
	cout << f[n];	
}