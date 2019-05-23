#include <bits/stdc++.h>

using namespace std;

vector <int> odd,even;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;++i){
		int x;
		cin >> x;
		if (x%2)
			odd.push_back(x);
		else
			even.push_back(x);
	}
	if (odd.size()==0){
		cout << 0;
		return 0;
	}
	sort(odd.begin(),odd.end(),cmp);
	int ans=0;
	for (int i=0;i<even.size();++i)
		ans+=even[i];
	for (int i=0;i<odd.size()-(odd.size()%2==0);++i)
		ans+=odd[i];
	cout << ans;
}