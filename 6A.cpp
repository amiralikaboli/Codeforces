#include <bits/stdc++.h>

using namespace std;

int a[10];

int main(){
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a,a+4);
	if (a[3]<a[2]+a[1] || a[2]<a[1]+a[0])
		cout << "TRIANGLE";
	else if (a[3]==a[2]+a[1] || a[2]==a[1]+a[0])
		cout << "SEGMENT";
	else
		cout << "IMPOSSIBLE";
}