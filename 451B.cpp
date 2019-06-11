#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
pair <int,int> p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		p[i].first=a[i];
		p[i].second=i;
	}
	sort(p,p+n);
	for (int i=0;i<n;++i)
		a[p[i].second]=i;
	int ind_s=-1,ind_f=-1;
	for (int i=0;i<n;++i)
		if (a[i]!=i){
			ind_s=i;
			break;
		}
	for (int i=n-1;i>=0;--i)
		if (a[i]!=i){
			ind_f=i;
			break;
		}
	if (ind_s==-1 && ind_f==-1){
		cout << "yes" << endl;
		cout << "1 1";
		return 0;
	}
	for (int i=ind_s;i<=ind_f;++i)
		if (i!=a[ind_f-i+ind_s]){
			cout << "no";
			return 0;
		}
	cout << "yes" << endl;
	cout << ind_s+1 << " " << ind_f+1;
}