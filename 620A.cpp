#include <bits/stdc++.h>

using namespace std;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << max(ghadr(x1-x2),ghadr(y1-y2));
}