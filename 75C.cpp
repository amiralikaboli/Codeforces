#include <bits/stdc++.h>

using namespace std;

const int INF=1E9+7;
vector <int> num;

int main(){
	int a,b,n;
	cin >> a >> b >> n;
	int bmm=__gcd(a,b);
	cerr << bmm << endl;
	for (int i=1;i*i<=bmm;++i)
		if (bmm%i==0){
			num.push_back(i);
			if (i!=bmm/i)
				num.push_back(bmm/i);
		}
	sort(num.begin(),num.end());
	//num.push_back(INF);
	for (int i=0;i<n;++i){
		int l,r;
		cin >> l >> r;
		int ind=upper_bound(num.begin(),num.end(),r)-num.begin();
		--ind;
		if (num[ind]>=l)
			cout << num[ind];
		else
			cout << -1;
		cout << endl;
	}
}