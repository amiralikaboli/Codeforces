#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,s;
	cin >> n >> s;
	int mx=0,sum=0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		sum+=a;
		mx=max(mx,a);
	}
	if (sum-mx<=s)
		cout << "YES";
	else
		cout << "NO";
}