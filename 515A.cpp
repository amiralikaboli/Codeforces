#include <iostream>

using namespace std;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int x,y,t;
	cin >> x >> y >> t;
	x=ghadr(x);
	y=ghadr(y);
	if (x+y>t || (t-x-y)%2==1)
		cout << "No";
	else
		cout << "Yes";
}