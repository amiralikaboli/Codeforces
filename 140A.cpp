#include <bits/stdc++.h>

using namespace std;

#define ld long double

const ld EPS=1E-8;
const ld pi=acos(-1);

int main(){
	ld n,R,r;
	cin >> n >> R >> r;
	if (r>R)
		cout << "NO";
	else if (n>1 && (R-r)*sin(pi/n)+EPS<r)
		cout << "NO";
	else
		cout << "YES";
}
