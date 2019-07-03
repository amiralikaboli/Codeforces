#include <iostream>

using namespace std;

string s;
int dp[30];

int main(){
	int n,q;
	cin >> n >> q;	
	cin >> s;
	for (int i=0;i<30;++i)
		dp[i]=i;
	for (int i=0;i<q;++i){
		int ind_x,int_y;
		char x,y;
		cin >> x >> y;
		x-='a';
		y-='a';
		for (int j=0;j<26;++j){
			if (dp[j]==x)
				ind_x=j;
			if (dp[j]==y)
				int_y=j;
		}
		swap(dp[int_y],dp[ind_x]);
	}
	for (int i=0;i<s.size();++i)
		cout << char(dp[s[i]-'a']+'a');
}