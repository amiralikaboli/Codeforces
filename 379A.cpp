#include <iostream>

using namespace std;

int main (){
	int a,b;
	cin >> a >> b;
	int t=a;
	int ans=t;
	while (t>=b){
		int x=t%b;
		t/=b;
		ans+=t;
		t+=x;
	}
	cout << ans;
}