#include <bits/stdc++.h>

using namespace std;

int a[100+10];

int main(){
	int n;
	cin >> n;
	int sum=0;
	for (int i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	int ans=0;
	for (int i=0;i<n;++i)
		if (a[i]%2==sum%2)
			++ans;
	cout << ans;
}