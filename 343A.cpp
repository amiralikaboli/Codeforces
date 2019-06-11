#include <bits/stdc++.h>

using namespace std;

#define int long long

int calc(int a,int b){
	if (a==0)
		return 0;
	return b/a+calc(b%a,a);
}
int32_t main(){
	int a,b;
	cin >> a >> b;
	cout << calc(a,b);
}