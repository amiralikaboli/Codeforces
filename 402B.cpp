#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E3+10;
int a[MaxN];
int h[MaxN][MaxN];

int main(){
	int n,k;
	cin >> n >> k;
	for (int i=0;i<n;++i)
		cin >> a[i];
	int mn=1E9+7;
	int ind=-1;
	for (int i=0;i<n;++i){
		int cnt=0;
		h[i][i]=a[i];
		for (int j=i-1;j>=0;--j){
			h[i][j]=h[i][j+1]-k;
			if (a[j]!=h[i][j])
				++cnt;
		}
		for (int j=i+1;j<n;++j){
			h[i][j]=h[i][j-1]+k;
			if (a[j]!=h[i][j])
				++cnt;
		}
		if (mn>cnt && h[i][0]>0){
			mn=cnt;
			ind=i;
		}
	}
	cout << mn << endl;
	for (int i=0;i<n;++i)
		if (h[ind][i]>a[i])
			cout << "+ " << i+1 << " " << h[ind][i]-a[i] << endl;
		else if (h[ind][i]<a[i])
			cout << "- " << i+1 << " " << a[i]-h[ind][i] << endl;
}