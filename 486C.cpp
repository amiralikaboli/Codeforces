#include <bits/stdc++.h>

using namespace std;

vector <int> ind;

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int l,p;
	cin >> l >> p;
	--p;
	string s;
	cin >> s;
	int ans=0;
	for (int i=0;i<l/2;++i)
		if (s[i]!=s[l-i-1]){
			if (p<l/2)
				ind.push_back(i);
			else
				ind.push_back(l-i-1);
			ans+=min(ghadr(s[l-i-1]-s[i]),26-ghadr(s[l-i-1]-s[i]));
			//cerr << ans << " ";
		}
	//cerr << endl;
	if (ind.size()==0){
		cout << 0;
		return 0;
	}
	if (ind.size()==1){
		cout << ghadr(ind[0]-p)+ans;
		return 0;
	}
	sort(ind.begin(),ind.end());
	int ds=p-ind[0];
	int de=ind.back()-p;
	//cerr << ds << " " << de << endl;
	if (de>0)
		ans+=2*min(ds,de)+max(ds,de);
	else
		ans+=ds;
	cout << ans;
}