#include <iostream>

using namespace std;

int main (){
	int n,m;
	cin >> n >> m;
	if (n==0){
		if (m==0)
			cout << 0 << " " << 0;
		else
			cout << "Impossible";
		return 0;
	}
	if (m==0)
		++m;
	cout << max(m,n) << " " << n+m-1;
}