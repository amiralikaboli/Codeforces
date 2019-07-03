#include <iostream>
#include <set>

using namespace std;

int dp[30][30];
set <int> st;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		string s;
		cin >> s;
		for (int j=0;j<s.size();++j){
			st.insert(s[j]-'a');
			//cerr << s[j] << " " << s[j]-'a' << endl;
		}
		if (st.size()==1){
			int x=*st.begin();
			//cerr << x << endl;
			for (int j=0;j<26;++j){
				dp[j][x]+=s.size();
				dp[x][j]+=s.size();
			}
			dp[x][x]-=s.size();
		}
		if (st.size()==2){
			int x=*st.begin();
			int y=*st.rbegin();
			//cerr << x << " " << y << endl;
			dp[x][y]+=s.size();
			dp[y][x]+=s.size();
		}
		st.clear();
	}
	int mx=0;
	for (int i=0;i<26;++i)
		for (int j=0;j<26;++j)
			mx=max(mx,dp[i][j]);
	cout << mx;
}