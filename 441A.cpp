#include <iostream>

using namespace std;

bool b[100];

int main(){
	int n,v;
	cin >> n >> v;
	for (int i=1;i<=n;++i){
		int k;
		cin >> k;
		for (int j=0;j<k;++j){
			int x;
			cin >> x;
			if (x<v)
				b[i]=true;
		}
	}
	int ans=0;
	for (int i=0;i<=n;++i)
		ans+=b[i];
	cout << ans << endl;
	for (int i=0;i<=n;++i)
		if (b[i]==true)
			cout << i << " ";
}