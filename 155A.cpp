#include <iostream>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];

int main(){
	int ans=0;
	int n;
	cin >> n;
	cin >> a[0];
	int mn=a[0];
	int mx=a[0];
	for (int i=1;i<n;++i){
		cin >> a[i];
		if (a[i]<mn){
			++ans;
			mn=a[i];
		}
		if (a[i]>mx){
			++ans;
			mx=a[i];
		}
	}
	
	cout << ans;
}