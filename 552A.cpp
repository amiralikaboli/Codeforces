#include <iostream>

using namespace std;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int n;
	cin >> n;
	long long ans=0;
	for (int i=0;i<n;++i){
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ans+=(ghadr(x1-x2)+1)*(ghadr(y1-y2)+1);
	}
	cout << ans;
}