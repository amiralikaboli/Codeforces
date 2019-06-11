#include <iostream>

using namespace std;

int p[100*1000+10];

int main (){
	int n;
	cin >> n;
	int ans=n;
	cin >> p[0];
	for (int i=1;i<n;++i){
		cin >> p[i];;
		if (p[i]==p[i-1])
			--ans;
	}
	cout << ans;
}