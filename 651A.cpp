#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if (a>b)
		swap(a,b);
	int ans=0;
	while (a>0 && b>0){
		++a;
		b-=2;
		if (b<0)
			break;
		++ans;
		if (a>b)
			swap(a,b);
	}
	cout << ans;
}