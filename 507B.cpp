#include <iostream>
#include <cmath>

using namespace std;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int r,x,y,a,b;
	cin >> r >> x >> y >> a >> b;
	double d=sqrt(pow(ghadr(a-x),2)+pow(ghadr(b-y),2));
	cout << ceil(d/2/r);
}