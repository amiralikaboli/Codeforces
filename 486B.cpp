#include <bits/stdc++.h>

using namespace std;

const int MaxNM=100+10;
bool mark[MaxNM][MaxNM];
bool ans[MaxNM][MaxNM];

int main(){
	int n,m;
	cin >> n >> m;
	int t_f=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j){
			cin >> mark[i][j];
			t_f+=mark[i][j];
		}
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			if (mark[i][j]==true){
				int r=0,c=0;
				for (int l=0;l<m;++l)
					r+=mark[i][l];
				for (int l=0;l<n;++l)
					c+=mark[l][j];
				if (r==m && c==n)
					ans[i][j]=true;
				else if (r!=m && c!=n){
					cout << "NO";
					return 0;
				}
			}
	int t_l=0;
	for (int i=0;i<n;++i)
		for (int j=0;j<m;++j)
			t_l+=ans[i][j];
	if (t_f!=0 && t_l==0){
		cout << "NO";
		return 0;
	}
	cout << "YES" << endl;
	for (int i=0;i<n;++i){
		for (int j=0;j<m;++j)
			cout << ans[i][j] << " ";
		cout << endl;
	}
}