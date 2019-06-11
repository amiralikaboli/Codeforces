#include <iostream>

using namespace std;

int a[111111];
bool mark[111111];

int main (){
	int n,ans=0;
	cin >> n;
	for (int i=0;i<n;++i)
		cin >> a[i];
	for (int i=0;i<n;++i)
		if (a[i]==i)
			++ans;
		else
			mark[i]=true;
	for (int i=0;i<n;++i)
		if (mark[i]==true && mark[a[i]]==true && a[a[i]]==i){
			cout << ans+2;
			return 0;
		}
	if (ans==n)
		cout << n;
	else
		cout << ans+1;
}