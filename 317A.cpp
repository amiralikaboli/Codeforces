#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,x,y;
	cin >> x >> y >> n;
	if (x>y)
		swap(x,y);
	if (y>=n){
		cout << 0;
		return 0;
	}
	if (x<=0 && y<=0){
		cout << -1;
		return 0;
	}
	long long t=0;
	if (x<=0){
		t=(-x+y-1)/y;
		x+=(-x+y-1)/y*y;
	}
	for (long long i=1; ;++i){
		//cerr << x << " " << y << " " << x+y << endl;
		long long s=x+y;
		x=y;
		y=s;
		if (y>=n){
			cout << i+t << " ";
			return 0;
		}
	}
}