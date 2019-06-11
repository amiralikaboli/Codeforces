#include <iostream>
#include <algorithm>

using namespace std;

const int Max=100+10;
int b[Max],g[Max],dp[Max][Max];

int ghadr(int x){
	return max(x,-x);
}

int main(){
	int B,G;
	cin >> B;
	for (int i=1;i<=B;++i)
		cin >> b[i];
	cin >> G;
	for (int i=1;i<=G;++i)
		cin >> g[i];
	sort(b+1,b+B+1);
	sort(g+1,g+G+1);
	for (int i=1;i<=B;++i)
		for (int j=1;j<=G;++j)
			for (int x=1;x<=i;++x)
				for (int y=1;y<=j;++y)
					if (ghadr(b[i]-g[j])<2)
						dp[i][j]=max(dp[i][j],dp[i-x][j-y]+1);
	int mx=0;
	for (int i=0;i<=B;++i){
		for (int j=0;j<=G;++j){
			cerr << dp[i][j] << " ";
			mx=max(dp[i][j],mx);
		}
		cerr << endl;
	}
	cout << mx;
}