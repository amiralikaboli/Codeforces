#include <bits/stdc++.h>

using namespace std;

const int MaxN=50+10;
int a[MaxN][MaxN];
int p[MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			cin >> a[i][j];
	int last=-1;
	for (int i=0;i<n;++i)
		for (int j=i+1;j<n;++j)
			if (a[i][j]==n-1){
				p[i]=n-1;
				p[j]=n;
				last=j;
			}
	for (int cnt=n-2;cnt>=1;--cnt)
		for (int i=0;i<n;++i)
			if (a[last][i]==cnt){
				p[i]=cnt;
				break;
			}
	for (int i=0;i<n;++i)
		cout << p[i] <<  " ";
}