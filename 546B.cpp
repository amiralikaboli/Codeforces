#include <iostream>
#include <vector>

using namespace std;

const int INF=1E9+7;
const int Max=3333;
int a[Max];
int d[Max];
vector <int> v;

int main (){
	int n,x=INF,cnt=0;
	long long ans=0;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		++d[a[i]];
	}
	for (int i=1;i<=n;++i)
		if (d[i]==0)
			v.push_back(i);
	for (int i=n+1;i<=2*n;++i)
		v.push_back(i);
	for (int i=0;i<v.size();++i)
		for (int j=1;j<=n;++j)
			if (d[j]>1 && v[i]>j){
				ans+=max(v[i]-j,j-v[i]);
				--d[j];
				++d[v[i]];
				break;
			}
	cout << ans;
}