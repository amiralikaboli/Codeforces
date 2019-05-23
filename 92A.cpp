#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	m%=(n*(n+1)/2);
	for (int i=1;i<=n;++i){
		if (m<i){
			cout << m;
			return 0;
		}
		m-=i;
	}
	cout << m;
}