#include <iostream>

using namespace std;

int main (){
	int n,x,ans=0;
	cin >> n >> x;
	for (int i=1;i*i<=x;++i)
		if (x%i==0){
			if (i!=x/i && i<=n && x/i<=n)
				ans+=2;
			if (i==x/i && i<=n)
				++ans;
		}
	cout << ans;
}