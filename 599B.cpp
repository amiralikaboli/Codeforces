#include <bits/stdc++.h>

using namespace std;

const int MaxNM=1E5+10;
int b[MaxNM],f[MaxNM];
int a[MaxNM];
vector <int> ind[MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	for (int i=0;i<n;++i){
		cin >> f[i];
		ind[f[i]].push_back(i);
	}
	for (int i=0;i<m;++i)
		cin >> b[i];
	for (int i=0;i<m;++i)
		if (ind[b[i]].size()==0){
			cout << "Impossible";
			return 0;
		}
	for (int i=0;i<m;++i)
		if (ind[b[i]].size()>1){
			cout << "Ambiguity";
			return 0;
		}
	for (int i=0;i<m;++i)
		a[i]=ind[b[i]][0];
	cout << "Possible" << endl;
	for (int i=0;i<m;++i)
		cout << a[i]+1 << " ";
}