#include <iostream>

using namespace std;

int d[25*60];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int h,m;
		cin >> h >> m;
		++d[h*60+m];
	}
	int ans=0;
	for (int i=0;i<25*60;++i)
		ans=max(ans,d[i]);
	cout << ans;
}