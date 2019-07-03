#include <iostream>

using namespace std;

const int INF=1E9+7;
int a[5][55];
int b[55];
int s_first[55];
int s_sec[55];

int main (){
	int n;
	cin >> n;
	for (int i=0;i<2;++i)
		for (int j=0;j<n-1;++j)
			cin >> a[i][j];
	for (int i=0;i<n;++i)
		cin >> b[i];
	s_first[0]=0;
	for (int i=1;i<n;++i)
		s_first[i]=s_first[i-1]+a[0][i-1];
	s_sec[n-1]=0;
	for (int i=n-2;i>=0;--i)
		s_sec[i]=s_sec[i+1]+a[1][i];
	int ans=0;
	int mn=INF;
	int ind=-1;
	for (int i=0;i<n;++i){
		b[i]+=s_first[i]+s_sec[i];
		if (mn>b[i]){
			mn=b[i];
			ind=i;
		}
	}
	//for (int i=0;i<n;++i)
	//	cerr << s_first[i] << " " << s_sec[i] << " " << b[i] << endl; 
	//cerr << mn << " ";
	ans+=mn;
	mn=INF;
	for (int i=0;i<n;++i)
		if (i!=ind)
			mn=min(mn,b[i]);
	//cerr << mn << " ";
	ans+=mn;
	cout << ans;
}