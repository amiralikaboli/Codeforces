#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x1,y1,x2,y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	int dx=min(x1+x2,2*n-x1-x2);
	int dy=min(y1+y2,2*n-y1-y2);
	if (dx==0 && (x1==0 || x1==n))
		cout << abs(y1-y2);
	else if (dy==0 && (y1==0 || y1==n))
		cout << abs(x1-x2); else
		cout << dx+dy;
}