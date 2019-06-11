#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int w[MaxN],b[MaxN];
bool mark[MaxN];
vector <int> f;

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> w[i];
	for (int i=0;i<k;++i){
		cin >> b[i];
		--b[i];
	}
	for (int i=0;i<k;++i)
		if (mark[b[i]]==false){
			mark[b[i]]=true;
			f.push_back(b[i]);
		}
	int ans=0;
	for (int i=0;i<k;++i){
		int sum=0;
		int x;
		int ind=-1;
		for (int j=0;j<f.size();++j)
			if (f[j]==b[i]){
				x=f[j];
				ind=j;
				break;
			}
			else
				sum+=w[f[j]];
		ans+=sum;
		for (int j=ind-1;j>=0;--j)
			f[j+1]=f[j];
		f[0]=x;
	}
	cout << ans;
}