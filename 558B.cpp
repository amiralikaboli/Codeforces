#include <iostream>

using namespace std;

const int Max=1E6+10;
const int INF=1E9+10;
int x[Max],m[Max],a[Max],d[Max];

int main (){
	int n;
	for (int i=0;i<Max;++i)
		m[i]=INF;
	cin >> n;
	for (int i=0;i<n;++i){
		cin >> a[i];
		x[a[i]]=max(x[a[i]],i);
		m[a[i]]=min(m[a[i]],i);
		++d[a[i]];
	}
	int maxd=0;
	for (int i=0;i<Max;++i)
		maxd=max(maxd,d[i]);
	int len=INF;
	int ind;
	for (int i=0;i<Max;++i)
		if (d[i]==maxd && len>x[i]-m[i]+1){
			len=x[i]-m[i]+1;
			ind=i;
		}
	cout << m[ind]+1 << " " << x[ind]+1;
}