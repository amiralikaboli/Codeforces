#include <bits/stdc++.h>

using namespace std;

const long long MaxN=1E5+10;
long long a[MaxN];
set <long long> st;

int main(){
	long long n,k;
	cin >> n >> k;
	for (long long i=0;i<n;++i){
		cin >> a[i];
		st.insert(a[i]);
	}
	sort(a,a+n);
	for (long long i=0;i<n;++i){
		if (st.count(a[i]*k)!=0 && st.count(a[i])!=0 && k!=1)
			st.erase(a[i]*k);
	}
	cout << st.size();
}