#include <iostream>

using namespace std;

const int MaxN=1E3+10;


int main(){
	int n,p,b;
	cin >> n >> b >> p;
	int t1=0,t2=0;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		if (a==1)
			++t1;
		else
			++t2;
	}
	int ans=0;
	if (t1>b)
		ans+=t1-b;
	if (t1>b)
		b=0;
	else
		b-=t1;
	if (t2>b+p)
		ans+=t2-b-p;
	cout << ans;
}