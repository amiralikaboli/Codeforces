#include <bits/stdc++.h>

using namespace std;

long long t[5];

int main(){
	cin >> t[0] >> t[1] >> t[2];
	sort(t,t+3);
	cout << (t[0]+t[1]+min(t[2],2*t[0]+2*t[1]))/3;
}