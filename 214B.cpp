#include <bits/stdc++.h>

using namespace std;

int t[10];
vector <int> one,two;
vector <int> ans;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n;
	cin >> n;
	int sum=0;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		sum+=x;
		++t[x];
	}
	if (t[0]==0){
		cout << -1;
		return 0;
	}
	for (int i=9;i>=0;--i)
		for (int j=0;j<t[i];++j)
			if (i%3==1)
				one.push_back(i);
			else if (i%3==2)
				two.push_back(i);
			else
				ans.push_back(i);
	if (sum%3==1 && one.size()>0)
		one.pop_back();
	else if (sum%3==2 && two.size()>0)
		two.pop_back();
	else if (sum%3==1 && two.size()>1){
		two.pop_back();
		two.pop_back();
	}
	else if (sum%3==2 && one.size()>1){
		one.pop_back();
		one.pop_back();
	}
	for (int i=0;i<one.size();++i)
		ans.push_back(one[i]);
	for (int i=0;i<two.size();++i)
		ans.push_back(two[i]);
	sort(ans.begin(),ans.end(),cmp);
	if (ans[0]==0){
		cout << 0;
		return 0;
	}
	for (int i=0;i<ans.size();++i)
		cout << ans[i];
}