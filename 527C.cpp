#include <bits/stdc++.h>

using namespace std;

#define int long long

multiset <int> vercut,horcut,verbaze,horbaze;

void HorizontalCutting(int x){
	multiset<int>::iterator it=horcut.upper_bound(x);
	int r=*it;
	--it;
	int l=*it;
	horbaze.erase(horbaze.find(r-l));
	horbaze.insert(r-x);
	horbaze.insert(x-l);
	horcut.insert(x);
	cout << (*horbaze.rbegin())*(*verbaze.rbegin()) << endl;
}

void VerticalCutting(int x){
	multiset<int>::iterator it=vercut.upper_bound(x);
	int r=*it;
	--it;
	int l=*it;
	verbaze.erase(verbaze.find(r-l));
	verbaze.insert(r-x);
	verbaze.insert(x-l);
	vercut.insert(x);
	cout << (*horbaze.rbegin())*(*verbaze.rbegin()) << endl;
}

int32_t main(){
	ios::sync_with_stdio(false); cin.tie();
	int n,w,h;
	cin >> w >> h >> n;

	horcut.insert(0);
	horcut.insert(h);
	horbaze.insert(h);
	vercut.insert(0);
	vercut.insert(w);
	verbaze.insert(w);

	for (int i=0;i<n;++i){
		char c;
		int x;
		cin >> c >> x;
		if (c=='H')
			HorizontalCutting(x);
		else
			VerticalCutting(x);
	}
}