#include <iostream>

using namespace std;

int x1,x2,y1,y2;
	
int ghadr(int x){
	return max(x,-x);
}

void find(){
	if (x1!=x2 && y1!=y2){
		if (ghadr(x1-x2)!=ghadr(y1-y2)){
			cout << -1;
			return;
		}
		cout << x1 << " " << y2 << " " << x2 << " " << y1;
		return;
	}
	if (x1==x2){
		cout << x1-y1+y2 << " " << y1 << " " << x2-y1+y2 << " " << y2;
		return;
	}
	if (y1==y2){
		cout << x1 << " " << y1-x1+x2 << " " << x2 << " " << y2-x1+x2;
		return;
	}
	cout << -1;
	return;
}

int main(){
	cin >> x1 >> y1 >> x2 >> y2;
	find();
}