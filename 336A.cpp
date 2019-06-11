#include <bits/stdc++.h>

using namespace std;

int sgn(int x){
	if (x<0)
		return -1;
	if (x==0)
		return 0;
	if (x>0)
		return 1;
}

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int x,y;
	cin >> x >> y;
	int x1=sgn(x)*(ghadr(x)+ghadr(y)),y1=0,x2=0,y2=sgn(y)*(ghadr(x)+ghadr(y));
	if (x1>=x2){
		swap(x1,x2);
		swap(y1,y2);
	}
	cout << x1 << " " << y1 << " " << x2 << " " << y2; 
}