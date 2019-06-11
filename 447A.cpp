#include <iostream>

using namespace std;

const int MaxN=300+10;
bool mark[MaxN];

int main(){
	int n,p;
	cin >> p >> n;
	for (int i=0;i<n;++i){
		int a;
		cin >> a;
		if (mark[a%p]==true){
			cout << i+1;
			return 0;
		}
		mark[a%p]=true;
	}
	cout << -1;
	return 0;
}