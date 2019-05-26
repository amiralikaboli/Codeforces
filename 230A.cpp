#include <iostream>
#include <algorithm>

using namespace std;

int sum[1111];
pair <int,int> p[1111];

int main (){
	int s,n;
	cin >> s >> n;
		for (int i=1;i<=n;++i)
			cin >> p[i].first >> p[i].second;
		sort(p+1,p+n+1);
		sum[0]=0;
		for (int i=1;i<=n;++i)
			sum[i]=sum[i-1]+p[i].second;
		for (int i=1;i<=n;++i)
			if (s+sum[i-1]<=p[i].first){
				cout << "NO";
				return 0;
			}
		cout << "YES";
}