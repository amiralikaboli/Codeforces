#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	int p1,p2,p3,p4;
	cin >> p1 >> p2 >> p3 >> p4;
	cin >> a >> b;
	int ans=0;
	for (int i=a;i<=b;++i){
		int x=i;
		int fx=(((x%p1)%p2)%p3)%p4;
		if (x==fx)
			++ans;
	}
	cout << ans;
}