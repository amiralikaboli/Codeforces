#include <bits/stdc++.h>

using namespace std;

#define pss pair<string,string>

vector <pss> ans;

int main(){
	int n;
	cin >> n;
	for (int ind=0;ind<n;++ind){
		string s,t;
		cin >> s >> t;
		bool b=false;
		for (int i=0;i<ans.size();++i)
			if (s==ans[i].second){
				ans[i].second=t;
				b=true;
				break;
			}
		if (b==false)
			ans.push_back(pss(s,t));
	}
	cout << ans.size() << "\n";
	for (int i=0;i<ans.size();++i)
		cout << ans[i].first << " " << ans[i].second << endl;
}