#include <iostream>

using namespace std;

int d[111];

int main (){
	int n,s,t;
	cin >> n;
	int sum=0;
	for (int i=0;i<n;++i){
		cin >> d[i];
		sum+=d[i];
	}
	cin >> s >> t;
	if (s==t){
		cout << 0;
		return 0;
	}
	int ans=0;
	if (t>s)
		for (int i=s;i<t;++i)
			ans+=d[i-1];
	else
		for (int i=t;i<s;++i)
			ans+=d[i-1];
	cout << min(ans,sum-ans);
}