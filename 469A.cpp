#include <iostream>
#include <algorithm>
using namespace std;
int a[111];
int main (){
	int n,p1,p2,p,cnt=0;
	cin >> n >> p1;
	for (int i=0;i<p1;++i)
		cin >> a[i];
	cin >> p2;
	for (int i=p1;i<p2+p1;++i)
		cin >> a[i];
	sort (a,a+(p1+p2));
	for (int i=1;i<=n;++i){
		cnt=0;
		for (int j=0;j<p1+p2;++j)
			if (a[j]==i)
				++cnt;
		if (cnt==0){
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
	return 0;
}
