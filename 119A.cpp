#include <iostream>

using namespace std;

int a[5];

int gcd(int x,int y){
	if (x==0 || y==0)
		return 0;
	if (x%y==0)
		return y;
	return gcd(y,x%y);
}

int main (){
	int n;
	cin >> a[0] >> a[1] >> n;
	int ans=n;
	for (int i=0;i<n;++i){
		ans-=gcd(ans,a[i%2]);
		if (ans==0){
			cout << i%2;
			return 0;
		}
	}
}