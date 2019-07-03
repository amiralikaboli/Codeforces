#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

const int MaxN=500+10;
bool mark[MaxN*MaxN];
int a[MaxN*MaxN];
vector <int> ans;
multiset <int> ms;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n*n;++i){
		cin >> a[i];
		ms.insert(a[i]);
	}
	for (int t=0;t<n;++t){
		int x=*ms.rbegin();
		ans.push_back(x);
		ms.insert(x);
		for (int i=0;i<ans.size();++i){
			ms.erase(ms.find(__gcd(ans[i],x)));
			ms.erase(ms.find(__gcd(ans[i],x)));
		}

	}
	sort(ans.begin(),ans.end());
	for (int i=0;i<ans.size();++i)
		cout << ans[i] << " ";
}