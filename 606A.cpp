#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	int x,y,z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	int ex=(a>x)*(a-x)/2+(b>y)*(b-y)/2+(c>z)*(c-z)/2;
	int sh=(a<x)*(x-a)+(b<y)*(y-b)+(c<z)*(z-c);
	if (ex>=sh)
		cout << "Yes";
	else
		cout << "No";
}