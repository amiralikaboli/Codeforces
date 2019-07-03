#include <bits/stdc++.h>

using namespace std;

const int MaxN=1E5+10;
int a[MaxN];
bool b[MaxN],mark[MaxN];
vector <int> v;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i)
		if (mark[a[i]]==false && a[i]>=1 && a[i]<=n){
			mark[a[i]]=1;
			b[i]=1;
		}
	int ans=0;
	for (int i=1;i<=n;i++)
		if (mark[i]==false)
			v.push_back(i);
	for (int i=0;i<n;++i)
		if (b[i]==1)
			cout << a[i] << " ";
		else{
			cout << v[ans] << " ";
			++ans;
		}
}