#include <iostream>
#include <set>

using namespace std;

int d[1111];
set <int> s;

int main (){
	int n,ans=0;
	cin >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		s.insert(a);
		++d[a];
		ans=max(ans,d[a]);
	}
	cout << ans << " " << s.size();
}