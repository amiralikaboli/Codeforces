#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];

int main(){
	int n;
	cin >> n;
	int sum=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		sum+=x;
	}
	cout << n-1+(sum%n==0);
}