#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	int d=sqrt(x*x+y*y);
	if (d*d==x*x+y*y){
		cout << "black";
		return 0;
	}
	int b=(d%2 ? 1 : -1);
	if (x*y*b>0)
		cout << "white";
	else
		cout << "black";
}