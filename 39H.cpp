#include <bits/stdc++.h>

using namespace std;

int n;

string mabna(int x){
	string ans="";
	while (x){
		ans+=char(x%n+'0');
		x/=n;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

int main(){
	cin >> n;
	for (int i=1;i<n;++i){
		for (int j=1;j<n;++j)
			cout << mabna(i*j) << " ";
		cout << endl;
	}
}