#include <iostream>

using namespace std;

int t[5];

int main(){
	cin >> t[0] >> t[1] >> t[2];
	int cnt=0;
	int ans=30;
	while (t[0]>0 || t[1]>0 || t[2]>0){
		t[cnt%3]-=2;
		++cnt;
		++ans;
	}
	--ans;
	cout << ans;
}