#include <bits/stdc++.h>

using namespace std;

int main(){
	long long d1,d2,d3;
	cin >> d1 >> d2 >> d3;
	long long ans=min(d1+d2+d3,min(2*d1+2*d3,min(2*d2+2*d3,2*d1+2*d2)));
	cout << ans;
}