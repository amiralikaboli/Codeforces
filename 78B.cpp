#include <bits/stdc++.h>

using namespace std;

char c[]={'R','O','Y','G','B','I','V'};

int main(){
	int n;
	cin >> n;
	cout << c[4] << c[5] << c[6];
	for (int i=3;i<n;++i)
		cout << c[i%4];
}