#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	cin >> x;
	x=max(x,-x);
	int ans=sqrt(2*x);
	if ((ans*(ans+1)/2)<x)
		++ans;
	if ((ans*(ans+1)/2)%2!=x%2)
		++ans;
	if ((ans*(ans+1)/2)%2!=x%2)
		++ans;
	cout << ans;
}