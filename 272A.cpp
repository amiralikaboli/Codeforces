#include <bits/stdc++.h>

using namespace std;

int a[100+10];

int main(){
	int sum=0;
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		sum+=a[i];
	}
	if (n<5){
		if (n==1){
			if (sum%2==0)
				cout << 2;
			if (sum%2)
				cout << 3;
		}
		if (n==2){
			if (sum%3==0)
				cout << 3;
			if (sum%3==1)
				cout << 4;
			if (sum%3==2)
				cout << 3;
		}
		if (n==3){
			if (sum%4==0)
				cout << 3;
			if (sum%4==1)
				cout << 4;
			if (sum%4==2)
				cout << 4;
			if (sum%4==3)
				cout << 4;
		}
		if (n==4)
			cout << 4;
		return 0;
	}
	++n;
	int ans=0;
	if (sum%n!=0)
		++ans;
	if (sum%n!=n-1)
		++ans;
	if (sum%n!=n-2)
		++ans;
	if (sum%n!=n-3)
		++ans;
	if (sum%n!=n-4)
		++ans;
	cout << ans;
}