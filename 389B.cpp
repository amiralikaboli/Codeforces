#include <bits/stdc++.h>

using namespace std;

const int MaxN=100+10;
char c[MaxN][MaxN];

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j)
			cin >> c[i][j];
	for (int i=0;i<n;++i)
		for (int j=0;j<n;++j){
			if (c[i][j]=='#' && (i>n-3 || j==0 || j==n-1)){
				cout << "NO";
				return 0;
			}
			else if (c[i][j]=='#' && (c[i+1][j]!='#' || c[i+2][j]!='#' || c[i+1][j+1]!='#' || c[i+1][j-1]!='#')){
				cout << "NO";
				return 0;
			}
			else if (c[i][j]=='#')
				c[i][j]=c[i+1][j-1]=c[i+1][j]=c[i+1][j+1]=c[i+2][j]='.';
		}
	cout << "YES";
}