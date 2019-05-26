#include <bits/stdc++.h>

using namespace std;

const int MaxNK=1E3+10;
int a_mn[MaxNK],a_mx[MaxNK];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<k;++i){
		cin >> a_mn[i];
		a_mx[i]=a_mn[i];
	}
	long long ans_mn=0;
	for (int i=0;i<n;++i){
		int mn=1E9+7;
		int ind;
		for (int i=0;i<k;++i)
			if (a_mn[i]>0 && mn>a_mn[i]){
				mn=a_mn[i];
				ind=i;
			}
		ans_mn+=mn;
		--a_mn[ind];
	}
	long long ans_mx=0;
	for (int i=0;i<n;++i){
		int mx=0;
		int ind;
		for (int i=0;i<k;++i)
			if (a_mx[i]>0 && mx<a_mx[i]){
				mx=a_mx[i];
				ind=i;
			}
		ans_mx+=mx;
		--a_mx[ind];
	}
	cout << ans_mx << " " << ans_mn;
}