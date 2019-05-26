#include <bits/stdc++.h>

using namespace std;

const int MaxN=2E4+10;
int a[MaxN];
vector <int> v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=1;i*i<n;++i)
		if (n%i==0){
			v.push_back(i);
			v.push_back(n/i);
		}
	if (sqrt(n)==(int)sqrt(n))
		v.push_back(sqrt(n));
	int mx_sum=-(2E4*1E3+10);
	for (int i=0;i<v.size();++i){
		if (v[i]==1 || v[i]==2)
			continue;
		for (int j=0;j<n/v[i];++j){
			int sum=0;
			for (int l=j;l<n;l+=(n/v[i]))
				sum+=a[l];
			mx_sum=max(mx_sum,sum);
		}
	}
	cout << mx_sum;
}
//:|