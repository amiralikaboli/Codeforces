#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y;
	cin >> n >> x >> y;
	int ans=(y*n+99)/100;
	cout << max(0,ans-x);
}