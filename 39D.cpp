#include <bits/stdc++.h>

using namespace std;

int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int cnt=(a1==b1)+(a2==b2)+(a3==b3);
	cout << (cnt==0 ? "NO" : "YES");
}